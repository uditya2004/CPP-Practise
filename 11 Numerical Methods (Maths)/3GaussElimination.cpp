#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define N 4  // Size of the matrix (number of unknowns)

int main() {
    float a[N][N+1], x[N], t, s;
    int i, j, k;

    // Input the augmented matrix
    cout << "Enter the elements of the augmented matrix row-wise:" << endl;
    cout << fixed;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N + 1; j++) {
            cin >> a[i][j];  // Input each element of the augmented matrix
        }
    }

    // Forward Elimination to create an upper triangular matrix
    for (j = 0; j < N - 1; j++) {
        for (i = j + 1; i < N; i++) {
            t = a[i][j] / a[j][j];  // Calculate the ratio for elimination
            for (k = 0; k < N + 1; k++) {
                a[i][k] -= a[j][k] * t;  // Subtract rows
            }
        }
    }

    // Print the upper triangular matrix
    cout << "The upper triangular matrix is:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N + 1; j++) {
            cout << setw(8) << setprecision(4) << a[i][j];
        }
        cout << endl;
    }

    // Backward Substitution to find the solution
    for (i = N - 1; i >= 0; i--) {
        s = 0;
        for (j = i + 1; j < N; j++) {
            s += a[i][j] * x[j];  // Calculate the sum of known variables
        }
        x[i] = (a[i][N] - s) / a[i][i];  // Solve for x[i]
    }

    // Print the results (solutions)
    cout << "The solution is:" << endl;
    for (i = 0; i < N; i++) {
        cout << "x[" << setw(3) << i + 1 << "] = "
             << setw(7) << setprecision(4) << x[i] << endl;
    }

    return 0;
}



/*
Example

Enter the elements of augmented matrix rowwise
10 -7 3 5 6
-6 8 -1 -4 5
3 1 4 11 2
5 -9 -2 4 7


The upper triangular matrix is:
10.000 -7.0000 3.0000 5.0000 6.0000
0.0000 3.8000 0.8000 -1.0000 8.6000-0.0000 -0.0000 2.4474 10.3158 -6.8158
0.0000 -0.0000 -0.0000 9.9247 9.9247
The solution is:- 
X[ 1] = 5.0000
X[ 2] = 4.0000
X[ 3] = -7.0000
X[ 4] = 1.0000

*/
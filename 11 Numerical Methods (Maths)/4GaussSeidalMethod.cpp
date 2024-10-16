#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define N 3  // Size of the system of equations

int main() {
    float a[N][N+1], x[N], aerr, maxerr, t, s, err;
    int i, j, itr, maxitr;

    // Initializing the array x to 0
    for (i = 0; i < N; i++) {
        x[i] = 0;
    }

    // Input augmented matrix row-wise
    cout << "Enter the elements of the augmented matrix row-wise:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N + 1; j++) {
            cin >> a[i][j];
        }
    }

    // Input the allowed error and maximum number of iterations
    cout << "Enter the allowed error and maximum iterations:" << endl;
    cin >> aerr >> maxitr;

    // Print header for iteration output
    cout << fixed;
    cout << "Iteration" << setw(6) << "x[1]" << setw(11) << "x[2]" << setw(11) << "x[3]" << endl;

    // Perform Gauss-Seidel iterations
    for (itr = 1; itr <= maxitr; itr++) {
        maxerr = 0;

        // Update each variable x[i]
        for (i = 0; i < N; i++) {
            s = 0;
            for (j = 0; j < N; j++) {
                if (j != i) {
                    s += a[i][j] * x[j];  // Sum over non-diagonal elements
                }
            }

            t = (a[i][N] - s) / a[i][i];  // Update t with new value for x[i]
            err = fabs(x[i] - t);         // Compute error

            if (err > maxerr) {
                maxerr = err;             // Update maximum error
            }

            x[i] = t;  // Update x[i] with the new value
        }

        // Print the current iteration results
        cout << setw(5) << itr;
        for (i = 0; i < N; i++) {
            cout << setw(11) << setprecision(4) << x[i];
        }
        cout << endl;

        // Check if the solution has converged
        if (maxerr < aerr) {
            cout << "Converges in " << setw(3) << itr << " iterations" << endl;
            for (i = 0; i < N; i++) {
                cout << "x[" << setw(3) << i + 1 << "] = " << setw(7) << setprecision(4) << x[i] << endl;
            }
            return 0;  // Solution has converged
        }
    }

    // If max iterations reached without convergence
    cout << "Solution does not converge, iterations not sufficient." << endl;
    return 1;
}




/*
EXAMPLE
Enter the elements of augmented matrix rowwise
20    1   -2   17
3   20   -1  -18
2   -3   20   25

Enter the allowed error, maximum iterations
0.0001 10

 Iteration       X(1)          X(2)          X(3)
     1        0.8500       -1.0275        1.0109
     2        1.0025       -0.9998        0.9998
     3        1.0000       -1.0000        1.0000
     4        1.0000       -1.0000        1.0000

Converges in 4 iterations

X[1] =  1.0000
X[2] = -1.0000
X[3] =  1.0000

*/
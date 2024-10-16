#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function for which the root is to be found
float f(float x) {
    return (x * x * x - 4 * x - 9);
}

// Function that performs one iteration of the bisection method
void bisect(float &x, float a, float b, int &itr) {
    x = (a + b) / 2;
    ++itr;
    cout << "Iteration no." << setw(3) << itr
         << "  X = " << setw(7) << setprecision(5) << x << endl;
}

int main() {
    int itr = 0, maxitr;
    float x, a, b, aerr, x1;

    // Input values
    cout << "Enter the values of a, b, allowed error, and maximum iterations:" << endl;
    cin >> a >> b >> aerr >> maxitr;

    cout << fixed;

    // Initial bisection
    bisect(x, a, b, itr);

    // Perform the iterations of the bisection method
    do {
        if (f(a) * f(x) < 0)
            b = x;  // Root is in [a, x]
        else
            a = x;  // Root is in [x, b]

        bisect(x1, a, b, itr);

        // Check if the current approximation is within the allowed error
        if (fabs(x1 - x) < aerr) {
            cout << "After " << itr << " iterations, the root is approximately "
                 << setw(6) << setprecision(4) << x1 << endl;
            return 0;
        }

        // Update the value of x
        x = x1;
    } while (itr < maxitr);

    // If max iterations reached without convergence
    cout << "Solution did not converge; iterations were not sufficient." << endl;
    return 1;
}

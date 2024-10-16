#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function f(x) for which the root is to be found
float f(float x) {
    return x * log10(x) - 1.2;
}

// Derivative of f(x)
float df(float x) {
    return log10(x) + 0.43429;
}

int main() {
    int itr, maxitr;
    float h, x0, x1, aerr;

    // Input initial guess, allowed error, and maximum iterations
    cout << "Enter x0 (initial guess), allowed error, and maximum iterations:" << endl;
    cin >> x0 >> aerr >> maxitr;

    // Check if x0 is valid (logarithm is not defined for non-positive numbers)
    if (x0 <= 0) {
        cout << "Initial guess x0 must be greater than 0 for the logarithm to be defined." << endl;
        return 1;
    }

    cout << fixed;

    // Perform the Newton-Raphson iterations
    for (itr = 1; itr <= maxitr; itr++) {
        h = f(x0) / df(x0);  // Newton-Raphson formula to calculate h
        x1 = x0 - h;         // Update the value of x1

        // Display current iteration details
        cout << "Iteration no." << setw(3) << itr
             << "  X = " << setw(9) << setprecision(6) << x1 << endl;

        // Check if the current approximation is within the allowed error
        if (fabs(h) < aerr) {
            cout << "After " << setw(3) << itr
                 << " iterations, the root is approximately "
                 << setw(8) << setprecision(6) << x1 << endl;
            return 0; // Successfully found the root
        }

        x0 = x1;  // Update x0 for the next iteration
    }

    // If max iterations are reached without convergence
    cout << "Iterations not sufficient, solution does not converge." << endl;
    return 1;
}

#include "Equation.h"
#include <iostream>

using namespace std;

int main() {
    // User input for linear equation coefficients
    double linearA, linearB;
    cout << "Enter coefficients for linear equation (ax + b = 0):\n";
    cout << "a: ";
    cin >> linearA;
    cout << "b: ";
    cin >> linearB;

    // User input for quadratic equation coefficients
    double quadraticA, quadraticB, quadraticC;
    cout << "\nEnter coefficients for quadratic equation (ax^2 + bx + c = 0):\n";
    cout << "a: ";
    cin >> quadraticA;
    cout << "b: ";
    cin >> quadraticB;
    cout << "c: ";
    cin >> quadraticC;

    // Example usage of the classes
    LinearEquation linear(linearA, linearB);
    QuadraticEquation quadratic(quadraticA, quadraticB, quadraticC);

    cout << "\nLinear equation:\n";
    linear.solve();

    cout << "\nQuadratic equation:\n";
    quadratic.solve();

    return 0;
}
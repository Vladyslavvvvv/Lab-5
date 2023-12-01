#include "Equation.h"
#include <iostream>
#include <cmath>

using namespace std;

// Implementation for LinearEquation constructor
LinearEquation::LinearEquation(double a, double b) : a(a), b(b) {}

// Implementation for solving linear equation
void LinearEquation::solve() const {
    if (a == 0) {
        if (b == 0) {
            cout << "The equation has infinitely many solutions.\n";
        }
        else {
            cout << "The equation has no solutions.\n";
        }
    }
    else {
        double x = -b / a;
        cout << "Solution of the equation: x = " << x << "\n";
    }
}

// Implementation for QuadraticEquation constructor
QuadraticEquation::QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

// Implementation for solving quadratic equation
void QuadraticEquation::solve() const {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two solutions of the equation: x1 = " << x1 << ", x2 = " << x2 << "\n";
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "One solution of the equation: x = " << x << "\n";
    }
    else {
        cout << "The equation has no real roots.\n";
    }
}
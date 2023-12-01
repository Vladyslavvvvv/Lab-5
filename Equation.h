class Equation {
public:
    // Virtual function for solving equations
    virtual void solve() const = 0;
};

class LinearEquation : public Equation {
private:
    double a, b; // Coefficients of the linear equation ax + b = 0

public:
    // Constructor to initialize coefficients
    LinearEquation(double a, double b);

    // Implementation of the virtual function to compute roots of the linear equation
    void solve() const override;
};

class QuadraticEquation : public Equation {
private:
    double a, b, c; // Coefficients of the quadratic equation ax^2 + bx + c = 0

public:
    // Constructor to initialize coefficients
    QuadraticEquation(double a, double b, double c);

    // Implementation of the virtual function to compute roots of the quadratic equation
    void solve() const override;
};
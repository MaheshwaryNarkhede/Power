#include <iostream>

class Power {
private:
    double base;
    double exponent;

public:
    Power(double b, double e) : base(b), exponent(e) {}

    double calculatePower() {
        return pow(base, exponent);
    }

    // Overloading the power operator
    friend double operator^(const Power &p, double exp) {
        return pow(p.base, exp);
    }
};

int main() {
    Power p(2.0, 3.0);
    double result1 = p.calculatePower();
    std::cout << "Using the calculatePower method: " << result1 << std::endl;

    double result2 = p ^ 3.0;
    std::cout << "Using the overloaded operator: " << result2 << std::endl;

    return 0;
}

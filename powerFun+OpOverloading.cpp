#include <iostream>
#include <cmath>

class Power {
private:
    double base;
    double exponent;

public:
    Power(double b, double e) : base(b), exponent(e) {}

    // Function to calculate power
    double calculatePower() {
        return pow(base, exponent);
    }

    // Operator overloading for power
    Power operator^(const Power &other) {
        return Power(pow(base, other.exponent), 1);
    }
};

int main() {
    // Using the function to calculate power
    Power p(2.0, 3.0);
    double result1 = p.calculatePower();
    std::cout << "Using the calculatePower method: " << result1 << std::endl;

    // Using the overloaded operator for power
    Power p1(2.0, 3.0);
    Power p2 = p1 ^ Power(1, 3);
    std::cout << "Using the overloaded operator: " << p2.calculatePower() << std::endl;

    return 0;
}

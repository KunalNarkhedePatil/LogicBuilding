#include <iostream>
#include <cmath> // Include the cmath header

int main() {
    // Example usage of sqrt
    double number = 25.0;
    double squareRoot = sqrt(number); // Calculate square root
    std::cout << "Square root of " << number << " is " << squareRoot << std::endl;

    // Example usage of pow
    double base = 2.0;
    double exponent = 3.0;
    double powerResult = pow(base, exponent); // Calculate power
    std::cout << base << " raised to the power of " << exponent << " is " << powerResult << std::endl;

    return 0;
}

#include "complex.h"

int main() {
    Complex a, b;

    std::cout << "Enter complex number a: ";
    std::cin >> a;

    std::cout << "Enter complex number b: ";
    std::cin >> b;

    Complex sum = a + b;
    Complex difference = a - b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    if (a != b)
        std::cout << "a and b are not equal." << std::endl;

    return 0;
}

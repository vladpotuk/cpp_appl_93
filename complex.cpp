#include "complex.h"

Complex::Complex() : real(0.0), imag(0.0) {}

Complex::Complex(double realPart, double imagPart) : real(realPart), imag(imagPart) {}

Complex::Complex(const Complex& other) : real(other.real), imag(other.imag) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

bool Complex::operator!=(const Complex& other) const {
    return (real != other.real || imag != other.imag);
}

bool Complex::operator==(const Complex& other) const {
    return (real == other.real && imag == other.imag);
}

Complex Complex::operator-() const {
    return Complex(-real, -imag);
}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        real = other.real;
        imag = other.imag;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Complex& complex) {
    os << complex.real;
    if (complex.imag >= 0) {
        os << " + " << complex.imag << "i";
    }
    else {
        os << " - " << -complex.imag << "i";
    }
    return os;
}

std::istream& operator>>(std::istream& is, Complex& complex) {
    is >> complex.real >> complex.imag;
    return is;
}

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex();
    Complex(double realPart, double imagPart);
    Complex(const Complex& other);

    
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    bool operator!=(const Complex& other) const;
    bool operator==(const Complex& other) const;
    Complex operator-() const;  
    Complex& operator=(const Complex& other);

    
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);
    friend std::istream& operator>>(std::istream& is, Complex& complex);
};

#endif 

#include <iostream>
//#include "Complex.h"
#include "include/Complex.h"

int main() {
    Complex a(1, 2);
    Complex b(5,3);
    Complex c;
    Complex d;
    c = Complex::multiply(a,b);
    std::cout << c << std::endl;
    d = a * b;
    std::cout << d << std::endl;

    return 0;
}
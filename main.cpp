#include <iostream>
//#include "Complex.h"
#include "include/Complex.h"

int main() {
    Complex a(1, 2);
    Complex b(5,3);
    Complex c;
    c = Complex::multiply(a,b);
    std::cout << c << std::endl;

    return 0;
}
//
// Created by timko on 2019.02.12..
//

#ifndef COMPLEXCLASS_COMPLEX_H
#define COMPLEXCLASS_COMPLEX_H

#include<iostream>


class Complex {
private:
    double im; //imaginary part
    double re; //real part
public:
    Complex(double im, double re);
    Complex();
    Complex(double re);
    static Complex add(Complex a, Complex b);
    static Complex multiply(Complex a, Complex b);
    static Complex subtraction(Complex a, Complex b);
    //getters
    double getIm() const;
    double getRe() const;

    //setters
    void setIm(double Im);
    void setRe(double Re);

    std::ostream& operator<<(std::ostream& os, const Complex& cp);
    friend bool operator==(const Complex& lhs, const Complex& rhs);
    friend Complex operator+(const Complex& lhs, const Complex& rhs);
    friend Complex operator-(const Complex& lhs, const Complex& rhs);
    friend Complex operator*(const Complex& lhs, const Complex& rhs);
    

};


#endif //COMPLEXCLASS_COMPLEX_H

//
// Created by timko on 2019.02.12..
//

#include "../include/Complex.h"
#include "iostream"

Complex::Complex(double const re, double const im){
    this->im = im;
    this->re = re;
}

Complex::Complex() {
    this->re = 0;
    this->im = 0;
}

Complex::Complex(double const re) {
    this->re = re;
    this->im = 0;
}

double const Complex::getRe(){
    return re;
}

double const Complex::getIm(){
    return im;
}

void Complex::setRe(double const re){
    this->re = re;
}

void Complex::setIm(double const im){
    this->im = im;
}

Complex Complex::add(Complex a, Complex b){
    Complex c;
    double i = a.getIm() + b.getIm();
    double j = a.getRe() + b.getRe();
    c.setIm(i);
    c.setRe(j);
    return c;
}

Complex Complex::multiply(Complex a, Complex b){
    Complex c;
    double i = (a.getRe() * b.getRe()) - (a.getIm()*b.getIm());
    double j = a.getRe()*b.getIm() + a.getIm() * b.getRe();
    c.setRe(i);
    c.setIm(j);
    return c;
}

std::ostream& operator<<(std::ostream& os, Complex cp){
    os << cp.getRe() << "+" << cp.getIm() << "i";
    return os;
}
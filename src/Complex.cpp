//
// Created by timko on 2019.02.12..
//

#include "../include/Complex.h"
#include "iostream"

Complex::Complex(double re, double im){
    this->im = im;
    this->re = re;
}

Complex::Complex() {
    this->re = 0;
    this->im = 0;
}

Complex::Complex(double re) {
    this->re = re;
    this->im = 0;
}

double Complex::getRe(){
    return re;
}

double Complex::getIm(){
    return im;
}

void Complex::setRe(double re){
    this->re = re;
}

void Complex::setIm(double im){
    this->im = im;
}

Complex Complex::add(Complex a, Complex b){
    Complex c;
    c.setIm(a.getIm() + b.getIm());
    c.setRe(a.getRe() + b.getRe());
}

std::ostream& operator<<(std::ostream& os, Complex cp){
    os << cp.getRe() << "+" << cp.getIm() << "i";
    return os;
}
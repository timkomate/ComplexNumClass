//
// Created by timko on 2019.02.12..
//

#include "../include/Complex.h"

Complex::Complex(double im, double re){
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
    return this->re;
}

double Complex::getIm(){
    return this->im;
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

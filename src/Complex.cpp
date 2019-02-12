//
// Created by timko on 2019.02.12..
//

#include "Complex.h"

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

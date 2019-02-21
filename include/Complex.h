//
// Created by timko on 2019.02.12..
//

#ifndef COMPLEXCLASS_COMPLEX_H
#define COMPLEXCLASS_COMPLEX_H


class Complex {
private:
    double im; //imaginary part
    double re; //real part
public:
    Complex(double im, double re);
    Complex();
    Complex(double re);
    Complex add(Complex a, Complex b);

    //getters
    double getIm();
    double getRe();

    //setters
    void setIm(double Im);
    void setRe(double Re);


};


#endif //COMPLEXCLASS_COMPLEX_H

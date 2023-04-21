/*
CH-230-A
a13_p2.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <iostream>
#include <cmath>
#include "Complex.h"
 
using namespace std;
 
//default constructor
Complex::Complex()
{
    this->real = 0;
    this->imag = 0;
}
 
//all parameters constructor
Complex::Complex(float real, float imag)
{
    this->real = real;
    this->imag = imag;
}
 
//copy constructor
Complex::Complex(Complex &obj)
{
    this->real = obj.real;
    this->imag = obj.imag;
}
 
//destructor
Complex::~Complex()
{
 
}
 
void Complex::setImag(float real)
{
    this->real = real;
}
 
void Complex::setReal(float imag)
{
    this->imag = imag;
}
 
float Complex::getImag()
{
    return this->imag;
}
 
float Complex::getReal()
{
    return this->real;
}
 
void Complex::print()
{
    //if there is no imaginary part only the real part is printed
    //but we need to take note of its sign
    if(this->imag == 0)
    {
        if(this->real >= 0)
        {
            cout << noshowpos << this->real << showpos;
        }
        else if(this->real < 0)
        {
            cout << showpos << this->real;
        }
    }
    else
    {
        //we need to take note of the signs when printing
        if(this->real >= 0)
        {
            cout << noshowpos << this->real << showpos << this->imag << "i";
        }
        else if(this->real < 0)
        {
            cout << showpos << this->real << this->imag << "i";
        }
    }
}

//get a object that is conjugate of the caller object
Complex Complex::Conjugate(const Complex& obj)
{
    Complex conj(obj.real, obj.imag*-1);
    return conj;
}
 
Complex Complex::add(Complex obj)
{
    //create a new object to store the results of the addition
    Complex newobj;
    newobj.real = this->real + obj.real;
    newobj.imag = this->imag + obj.imag;
 
    return newobj;
}
 
Complex Complex::sub(Complex obj)
{
    //create a new object to store the results of the subtraction
    Complex newobj;
    newobj.real = this->real - obj.real;
    newobj.imag = this->imag - obj.imag;
 
    return newobj;
}
 
Complex Complex::mult(Complex obj)
{
    //create a new object to store the result of the multiplication
    Complex newobj;
    newobj.real = this->real * obj.real - this->imag * obj.imag;
    newobj.imag = this->imag * obj.real + this->real * obj.imag;  
 
    return newobj;
}
 
Complex Complex::operator+(Complex &obj)
{
    //create a new object to store the results of the addition
    Complex temp(this->real + obj.real, this->imag + obj.imag);
    return temp;
}
 
Complex Complex::operator-(Complex &obj)
{
    //create a new object to store the results of the subtraction
    Complex temp(this->real - obj.real, this->imag - obj.imag);
    return temp;
}
 
Complex Complex::operator*(Complex &obj)
{
    //create a new object to store the result of the multiplication
    Complex newobj;
    newobj.real = this->real * obj.real - this->imag * obj.imag;
    newobj.imag = this->imag * obj.real + this->real * obj.imag;  
 
    return newobj;
}

//overlaod the assign operator
Complex& Complex::operator=(const Complex &obj)
{
    this->real = obj.real;
    this->imag = obj.imag;
    return *this;
}

ostream& operator<<(ostream& out, const Complex &obj)
{   
    //if there is no imaginary part only the real part is printed
    //but we need to take note of its sign
    if(obj.imag == 0)
    {
        if(obj.real >= 0)
        {
            out << noshowpos << obj.real << showpos;
        }
        else if(obj.real < 0)
        {
            out << showpos << obj.real;
        }
    }
    else
    {
        //we need to take note of the signs when printing
        if(obj.real >= 0)
        {
            out << noshowpos << obj.real << showpos <<  obj.imag << "i";
        }
        else if(obj.real < 0)
        {
            out << showpos << obj.real << obj.imag << "i";
        }
    }
    return out;
}

istream& operator>>(istream& in, Complex &obj)
{
    //store the sign of the imaginary part
    char sign_imag;
    //read the values for each
    in >> obj.real;
    in >> sign_imag;
    in >> obj.imag;

    //if the sign is - the imaginary part has to be negative as well
    if(sign_imag == '-')
    {
        obj.imag = -obj.imag;
    }   
    return in;
}
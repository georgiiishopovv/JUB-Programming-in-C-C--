/*
CH-230-A
a13_p2.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <string>
#include <string>
 
class Complex
{
    private:
        float real;
        float imag;
    public:
        Complex();
        Complex(float, float);
        Complex(Complex&);
        ~Complex();
        void setReal(float);
        void setImag(float);
        float getReal();
        float getImag();
        void print();
        //regular methods
        Complex Conjugate(const Complex&);
        Complex add(Complex);
        Complex sub(Complex);
        Complex mult(Complex);
        //additional operator overloading methods
        Complex operator+(Complex&);
        Complex operator-(Complex&);
        Complex operator*(Complex&);
        Complex& operator=(const Complex&);
        friend std::ostream& operator<<(std::ostream& out, const Complex&);
        friend std::istream& operator>>(std::istream& in, Complex&);
};
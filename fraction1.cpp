/*
CH-230-A
a12_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <iostream>
#include "fraction.h"
using namespace std;
 
Fraction::Fraction()
{
    num = 1;
    den = 1;
}
 
Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
 
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

//using recursive function to find gcd of two numbers
int Fraction::gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if(a == 0)
    {
        return b;
    }
    else if(b == 0)
    {
        return a;
    }
    else if(a == b)
    {
        return a;
    }
    else if(a < b)
    {
        return gcd(a, b-a);
    }
    else
    {
        return gcd(a-b, b);
    }
}
 
int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
 
}
 
//overloading << to print the fraction
ostream& operator<<(ostream& out, const Fraction& frac)
{
    cout << endl;
    out << frac.num << endl;
    out << frac.den;
    return out;
}
 
//overloading >> to read input for the fraction
istream& operator>>(istream& in, Fraction& frac)
{
    cout << "Numerator: ";
    in >> frac.num; 
    cout << "Denominator: ";
    in >> frac.den;
 
    //if the denominator is 0, ask the user to input another number
    while(frac.den == 0)
    {
        cout << "Invalid denominator. Enter a value different than 0" << endl;
        cout << "Denominator: ";
        in >> frac.den;
    }
    return in;
}
 
//member function overloading the * operator
Fraction Fraction::operator*(Fraction& frac)
{
    Fraction temp(this->num*frac.num, this->den*frac.den);
    return temp;
}
 
//member fucntion overloading the / operator
Fraction Fraction::operator/(Fraction& frac)
{   
    //division is same as multiplication with reciprocal
    Fraction temp(this->num*frac.den, this->den*frac.num);
    return temp;
}





/*
CH-230-A
a12_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

//using recursive function to find GCD of two numbers
int Fraction::gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if(a == 0)
    {
        return b;
    }
    else if(b == 0)
    {
        return a;
    }
    else if(a == b)
    {
        return a;
    }
    else if(a < b)
    {
        return gcd(a, b-a);
    }
    else
    {
        return gcd(a-b, b);
    }
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

//overloading << to print the fraction
ostream& operator<<(ostream& out, const Fraction& frac)
{
    out << frac.num << "/" << frac.den;
    return out;
}

//overloading >> to read input for the fraction
istream& operator>>(istream& in, Fraction& frac)
{
    cout << "Numerator: ";
    in >> frac.num; 
    cout << "Denominator: ";
    in >> frac.den;
    //if the denominator is 0, ask the user to input another number
    while(frac.den == 0)
    {
        cout << "Invalid denominator. Enter a value different than 0" << endl;
        cout << "Denominator: ";
        in >> frac.den;
    }
    return in;
}

//member function overloading the * operator
Fraction Fraction::operator*(Fraction& frac)
{
    Fraction temp(this->num*frac.num, this->den*frac.den);
    return temp;
}

//member function overloading the / operator
Fraction Fraction::operator/(Fraction& frac)
{
    Fraction temp(this->num*frac.den, this->den*frac.num);
    return temp;
}

//member function overloading the + operator
Fraction Fraction::operator+(Fraction& frac)
{
    //using the defined function lcm()
    int numerator_1 = (this->num * lcm(this->den, frac.den))/this->den;
    int numerator_2 = (frac.num * lcm(this->den, frac.den))/frac.den;
    Fraction temp(numerator_1 + numerator_2, lcm(this->den, frac.den));
    return temp;
}

//member function overloading the - operator
Fraction Fraction::operator-(Fraction& frac)
{
    //using the defined lcm function
    int numerator_1 = (this->num * lcm(this->den, frac.den))/this->den;
    int numerator_2 = (frac.num * lcm(this->den, frac.den))/frac.den;
    Fraction temp(numerator_1 - numerator_2, lcm(this->den, frac.den));
    return temp;
}

//oveloading the = operator and returning an object reference
Fraction& Fraction::operator=(Fraction& frac)
{
    this->num = frac.num;
    this->den = frac.den;
    return *this;
}

//friend function overloading the > operator to compare two fractions
bool operator>(Fraction& frac1, Fraction& frac2)
{
    //store the two fractions as double numbers and compare them
    double fr1 = (double) frac1.num/frac1.den;
    double fr2 = (double) frac2.num/frac2.den;
    if(fr1 > fr2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//friend function overloading the < operator to compare two fractions
bool operator<(Fraction& frac1, Fraction& frac2)
{
    //store the two fractions as double numbers and compare them
    double fr1 = (double) frac1.num/frac1.den;
    double fr2 = (double) frac2.num/frac2.den;
    if(fr1 < fr2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

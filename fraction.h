/*
CH-230-A
a12_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

// simple class for fractions

#include <fstream>
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator
    int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1

    //overloaded operators
    friend std::ostream& operator<<(std::ostream& out, const Fraction& frac);
    friend std::istream& operator>>(std::istream& in, Fraction& frac);
    Fraction operator*(Fraction&);
    Fraction operator/(Fraction&);
    Fraction operator+(Fraction&);
    Fraction operator-(Fraction&);
    Fraction& operator=(Fraction&);
    friend bool operator>(Fraction&, Fraction&);
    friend bool operator<(Fraction&, Fraction&);
};

#endif /* FRACTION_H_ */
/*
CH-230-A
a12_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <iostream>
#include "fraction.h"
 
using namespace std;
 
int main(void)
{
    Fraction frac1;
    Fraction frac2;
    
    //enter data for the fractions
    cout << "Enter data for the first fractional number: " << endl;
    cin >> frac1;
    cout << "Enter data for the second fractional number: " << endl;
    cin >> frac2;
 
    //print the fractions after the performed operations
    cout << "Printing the product of the two fractions: ";
    cout << frac1*frac2 << endl;
    cout << "Printing the division of the two fractions: ";
    cout << frac1/frac2 << endl;
 
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

int main(void)
{
	Fraction frac1;
    Fraction frac2;
    
    cout << "Enter data for the first fractional number: " << endl;
    cin >> frac1;
    cout << "Enter data for the second fractional number: " << endl;
    cin >> frac2;

    //print the greater fraction using comparison with > and <
    cout << "The greater fraction is: " << endl;
    if(frac1 > frac2)
    {
        cout << frac1 << endl;
    }
    else if(frac1 < frac2)
    {
        cout << frac2 << endl;
    }

    //print the fractions after the performed operations
    cout << "Printing the product of the two fractions: ";
    cout << frac1*frac2 << endl;
    cout << "Printing the division of the two fractions: ";
    cout << frac1/frac2 << endl;

    //store the results of addition and subtraction into new objects
    Fraction temp1 = (frac1 + frac2);
    Fraction temp2 = (frac1 - frac2);

    //print the results using the new objects
    cout << "The sum of the two fractions is: ";
    cout << temp1 << endl;
    cout << "The difference of the two fractions is: ";
    cout << temp2 << endl;
}
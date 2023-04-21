/*
CH-230-A
a13_p2.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "Complex.h"
using namespace std;
 
using namespace std;
 
int main()
{
    Complex a, b, sum, mult, diff;
    //open the file for reading
    ifstream num1("in1.txt");
    if(!num1.good())
    {
        cerr << "Error openinig input file!" << endl;
        exit(1);
    }
    //open the file for reading
    ifstream num2("in2.txt");
    if(!num2.good())
    {
        cerr << "Error openinig input file!" << endl;
        exit(1);
    }
    //open the file for writing
    ofstream output("output.txt");
    if(!output.good())
    {
        cerr << "Error openinig output file!" << endl;
        exit(1);
    }

    //read the values for the two objects from the files
    num1 >> a;
    num2 >> b;
    sum = a + b;
    diff = a - b;
    mult = a * b;   

    cout << "Printing the sum, difference and multiplication on screen" << endl;
    cout << "Sum: "<< sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Multiplication: " << mult << endl;

    //write the new complex numbers that result from the calculations into
    //the output file
    cout << "Inputting the calculations into output.txt" << endl;
    output << "Sum: " << sum << endl;
    output << "Difference: " << diff << endl;
    output << "Multiplication: " << mult << endl;

    //close all files
    num1.close();
    num2.close();
    output.close();

}
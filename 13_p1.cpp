/*
CH-230-A
a12_p7.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    const int size = 100;
    string name;
    cin >> name;
    char buff[size];

    ifstream in("input.txt");
    if(!in.good())
    {
        cerr << "Error openinig input file!" << endl;
        exit(1);
    }
    ofstream out("input_copy.txt")
    {
        if(!out.good())
        {
            cerr << "Error openinig input file!" << endl;
            exit(1);
        }
    }
    while(in.getLine(buff, size))
    {
        out << buff << endl;
    }
}
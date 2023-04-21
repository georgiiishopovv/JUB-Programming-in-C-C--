/*
CH-230-A
a13_p1.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    const int size = 100;
    string name;
    cin >> name;
    string newfile;
    char buff[size];
    
    //open file for reading
    ifstream in(name);
    if(!in.good())
    {
        cerr << "Error openinig input file!" << endl;
        exit(1);
    }

    //store the name of the copy file
    newfile = "";
    newfile += name;
    newfile = newfile.substr(0, newfile.size()-4);
    newfile += "_copy.txt";

    //open file for writing
    ofstream out(newfile);
    if(!out.good())
    {
        cerr << "Error openinig input file!" << endl;
        exit(1);
    }

    //read the contents of the input file
    while(in.getline(buff, size))
    {
        //input into the output file
        out << buff << endl;
    }

    //close the files
    out.close();
    in.close();
}

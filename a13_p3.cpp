/*
CH-230-A
a13_p3.[cpp]
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
    int files;
    cout << "How many files do you want to read: ";
    cin >> files;
    string file_name;

    //open the file for binary output   
    ofstream output("concatn.txt", ios::out | ios::binary);
    if(!output.good())
    {
        cerr << "Error opening output file!" << endl;
        exit(1); 
    }
    
    //repeat for as many files as the user wants
    cout << "Enter the names of the files that you want to read from: " << endl;
    for(int i = 0; i < files; i++)
    {
        char buffer[300];
        //open the file that the user enters for binary reading
        cin >> file_name;
        ifstream in(file_name, ios::in | ios::binary);
        if(!in.good())
        {
            cerr << "Error opening input file!" << endl;
            exit(1);
        }
        //store the read values into the buffer
        in.read(buffer, 300);
        //use the buffer to output into the output file
        output.write(buffer, in.gcount());
        //separate the contents with a new line
        output << endl;
        //close the current open file
        in.close();
    }
    //close the output file
    output.close();
}
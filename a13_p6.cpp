/*
CH-230-A
a13_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;


int main()
{
    int size = 20;
    //create the vector
    vector<int> vector_1(size, 8);
    try
    {
        //trying to access the 21st element of the vector
        vector_1.at(20);
    }
    //use the out_of_range exception class
    catch(const out_of_range& e)
    {
        //call the predefined what() function of the exception class
        cerr << "Access index out of range: " << e.what() << endl;
    }
    return 0;
}
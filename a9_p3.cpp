/*
CH-230-A
a9_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
using namespace std;

//define the function
float absolute(float real_number)
{
    if(real_number < 0)
    {
        return -real_number;
    }
    else
    {
        return real_number;
    }
}

int main()
{
    float number;
    cin >> number;

    //print the result of the absolute function
    cout << "The absolute value is: " << absolute(number) << endl;
    return 0;
}

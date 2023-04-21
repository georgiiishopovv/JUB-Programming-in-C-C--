/*
CH-230-A
a9_p7.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
using namespace std;

//swap the integers using real call-by-reference and a temporary variable
void swapping(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

//swap the float using real call-by-reference and a temporary variable
void swapping(float &num1, float &num2)
{
    float temp = num1;
    num1 = num2;
    num2 = temp;
}

//swap the two char pointers using real call-by refernce and a temporary pointer
void swapping(const char* &ptr1, const char* &ptr2)
{
    const char *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    //call the functions
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    //print the results after the swappings
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}
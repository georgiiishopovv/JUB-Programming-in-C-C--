/*
CH-230-A
a13_p7.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

//create the exception class
class OwnException : public exception
{
    private:
        char err[100];
    public:
        OwnException(const char* err)
        {
            strcpy(this->err, err);
        }
        ~OwnException() {};
        const char* what() const noexcept
        {
            return "OwnException\n";
        }
};

//create the function which throws exceptions based on user input
void foo(int num)
{
    //switch statement based on parameter
    switch(num)
    {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException("Default case exception");
            break;

    }
}

//call each function in the main and catch the corresponding exceptions
int main()
{
    try
    {
        foo(1);
    }
    catch(char a)
    {
        cerr << "Caught in main: " << a << endl;
    }
    try
    {
        foo(2);
    }
    catch(int a)
    {
        cerr << "Caught in main: " << a << endl;
    }    
    try
    {
        foo(3);
    }
    catch(bool a)
    {
        cerr << "Caught in main " << a << endl;
    }
    try
    {
        foo(221);
    }
    //catch an exception instance of the OwnException class
    catch(OwnException &a)
    {
        cerr << "Caught in main: " << a.what() << endl;
    }
}
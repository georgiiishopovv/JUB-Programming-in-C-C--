#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int bills = 0;
    int mult;

    if(n >= 100)
    {
        mult = n / 100;
        bills += mult;
        n -=  mult * 100;
    }
    if(n >= 20)
    {
        mult = n / 20;
        bills += mult;
        n -=  mult * 20; 
    }
    if(n >= 10)
    {
        mult = n / 10;
        bills += mult;
        n -=  mult * 10; 
    }
    if(n >= 5)
    {
        mult = n / 5;
        bills += mult;
        n -=  mult * 5; 
    }
    if(n >= 1)
    {
        mult = n / 1;
        bills += mult;
        n -=  mult * 1; 
    }

    cout << bills << endl;
}

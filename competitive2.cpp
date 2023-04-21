#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    string input;

    for(int i = 0; i < tests; i++)
    {
        cin >> input;
        int length = input.length();
        string first = input.substr(0, length/2);
        string second = input.substr(length/2, length);
        if(length == 1)
        {
            cout << "No" << endl;
        }
        else if((length % 2) == 1)
        {
            cout << "No" << endl;
        }
        else if(first == second)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
}
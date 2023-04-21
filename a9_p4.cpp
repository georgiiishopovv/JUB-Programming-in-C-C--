/*
CH-230-A
a9_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstring>
using namespace std;

int mycount(int num1, int num2)
{
    return num2 - num1;
}

int mycount(char c, string s)
{
    int count = 0;
    int string_length = s.length();

    //check for the occurence of the character in the string
    for(int i = 0; i < string_length; i++)
    {
        if(c == tolower(s[i]) || c == toupper(s[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int num1, num2;
    char c;
    string s;
    cin >> num1;
    cin >> num2;
    getchar();
    cin >> c;
    getchar();
    getline(cin, s);

    //print the results of the overloaded functions
    cout << mycount(num1, num2) << endl;
    cout << mycount(c, s) << endl;
    
    return 0;
}
/*
CH-230-A
a9_p2.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    double x;
    string s;
    cin >> n >> x;
    getchar();
    cin >> s;

    //print n times
    for(int i = 0; i < n; i++)
    {
        cout << s << ":" << x << endl;
    }

    return 0;
}
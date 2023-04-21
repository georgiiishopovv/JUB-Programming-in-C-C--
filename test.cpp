#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int arr[n];
    int j = 0;

    for(int i = 1; i <= n; i++)
    {
        arr[i] = j;
        j += 3;
    }
}
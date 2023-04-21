/*
CH-230-A
a9_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
using namespace std;

int myfirst(int arr[])
{
    for(int i = 0; i < 7; i++)
    {
        //check for the first positive and even value
        if(arr[i] > 0 && arr[i] % 2 == 0)
        {
            return arr[i];
            break;
        }
    }  
    return -1;
}

double myfirst(double arr[])
{
    for(int i = 0; i < 7; i++)
    {
        //check if the element is negative and lacks a fractional part
        if(arr[i] < 0 && arr[i] == (int)arr[i])
        {
            return arr[i];
            break;
        }
    }  
    return -1.1;
}

char myfirst(char arr[])
{
    char con[] = {'a', 'e', 'i', 'o', 'u'};
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            //return the first character, which is a consonant
            if(arr[i] == toupper(con[j]) || arr[i] == tolower(con[j]))
            {
                return arr[i];
                break;
            }
        }
    }
    return '0';
}

int main()
{
    int int_arr[] = {5, 3, -2, 1, 4, -6, -8};
    double double_arr[] = {4.3, -33.3, 5.8, -3.0, 3, 2.9, -1.0};
    char char_arr[] = {'B', 'A', 'b', 'a', 'B', 'i', 'l'};  

    //print the corresponding results
    cout << "Array of integers - result: " << myfirst(int_arr) << endl;
    cout << "Array of doubles - result: " << myfirst(double_arr) << endl;
    cout << "Array of characters - result: " << myfirst(char_arr) << endl;

    return 0;
}
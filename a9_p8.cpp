/*
CH-230-A
a9_p8.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
using namespace std;

void subtract_max(int *arr, int n)
{
    int max = -2147483647 - 1; //lowest int value
    
    //find the max value in the array
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    //subtract the max value from every element
    for(int i = 0; i < n; i++)
    {
        arr[i] -= max;
    }
}

//deallocate the memory for the dynamic array
void deallocate(int arr[])
{
    delete [] arr;
    cout << "The memory has been deallocated!" << endl;
}

int main()
{
    int n;
    cin >> n;

    //allocate memory for the array
    int *a = new int[n];
    if(a == NULL)
    {
        cout << "Error allocating memory!" << endl;
        exit(1);
    }

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The array before the change:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    //call the function and show how it changes the array
    subtract_max(a, n);
    cout << "The array after the change:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    //call the function to deallocate the memory for the array
    deallocate(a);

    return 0;
}
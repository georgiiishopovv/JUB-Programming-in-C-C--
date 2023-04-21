/*
CH-230-A
a5_p2.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void divby5(float arr[], int size)
{
    //divide each element of the array by 5
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5;
    }
}

int main()
{
    float arr[] = {5.500, 6.500, 7.750, 8.000, 9.600, 10.360};
    //find how many elements are in the array
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before:\n");
    //print all elements of the array before the division
    for(int i = 0; i < size; i++)
    {
        //set a 3 digit decimal precision
        printf("%0.3f ", arr[i]);
    }
    printf("\n");
    //call the function to divide each element by 5
    divby5(arr, size);
    printf("After:\n");
    //print all elements of the array after the division
    for(int i = 0; i < size; i++)
    {
        //set a 3 digit decimal precision
        printf("%0.3f ", arr[i]);
    }
    printf("\n");

    return 0;
}
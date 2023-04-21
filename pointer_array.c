/*
CH-230-A
a5_p6.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int length;
    scanf("%d", &length);
    float arr[length];
    //populate the array
    for(int i = 0; i < length; i++)
    {
        scanf("%f", &arr[i]);
    }
    float *ptr;
    //the pointer points to the first element of the array
    ptr = &arr[0];
    //go through all elements of the array
    for(int i = 0; i < length; i++)
    {   
        //use address arithmetic to check if any element is negative
        //the number of elements before the first negative element in the array
        //is going to be the position of the negative number
        //terminate the loop
        if(*(ptr+i) < 0)
        {
            printf("Before the first negative value: %d elements", i);
            break;
        }
    }
    return 0;
}
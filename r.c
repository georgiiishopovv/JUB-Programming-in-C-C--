/*
CH-230-A
a2_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

void change(int *ptr)
{
    int *ptr_copy;
    ptr_copy = ptr;
    for(int i = 0; i < 3; i++)
    {
        ptr_copy[i] += 5;
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int *ptr;
    ptr = arr;
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    for(ptr = arr; *ptr != NULL; ptr++)
    {
        printf("%d ", *ptr);
    }
    printf("\n");
    change(arr);
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
}
    /*
    for(int i = 0; i < 3; i++)
    {
        ptr[i] += 3;
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        
    }
    */
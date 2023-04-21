/*
CH-230-A
a4_p6.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void greatest_values(int *ptr, int elements)
{
    int high1 = -2147483647 - 1; //smallest possible value of an int
    int high2 = -2147483647 - 1; //smallest possible value of an int
    for(int i = 0; i < elements; i++)
    {
        //if the current element is greater than high1
        //make high2 equal to high1
        //then make high1 equal to the current element
        if(ptr[i] >= high1)
        {
            high2 = high1;
            high1 = ptr[i];
        }
        //if the current element is less than high1, but greater than high2
        //make high2 equal to the current element
        else if(ptr[i] < high1 && ptr[i] > high2)
        {
            high2 = ptr[i];
        }
    }
    printf("The two greatest values within this array are: %d and %d", high1, high2);
}

int main()
{
    int *arr_ptr;
    int n;
    printf("How many elements?: ");
    scanf("%d", &n);
    arr_ptr = (int*) malloc(sizeof(int) * n); //allocate dynamic memory

    if(arr_ptr == NULL) //check if the allocation is valid
    {
        exit(1);
    }
    else
    {
        for(int i = 0; i < n; i++) //populate the array
        {
            printf("Enter an integer: ");
            scanf("%d", &arr_ptr[i]);
        }
    }
    greatest_values(arr_ptr, n); //call the function to print the results
    free(arr_ptr); //release the memory
    return 0; 
}
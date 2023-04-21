/*
CH-230-A
a5_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void divby5(float arr[], int size)
{
    //divide every element of the array by 5
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5;
    }
}

int main()
{
    int n;
    printf("How many elements do you need: ");
    scanf("%d", &n);
    float* dyn_arr;
    //allocate dynamic memory for the array according to the user input
    dyn_arr = (float*) malloc(sizeof(float) * n);
    //check if the memory was allocated correctly
    if(dyn_arr == NULL)
    {
        exit(1);
    }
    else
    {
        //populate the dynamic array
        for(int i = 0; i < n; i++)
        {
            printf("Enter a number: ");
            scanf("%f", &dyn_arr[i]);
        }
        printf("\n");
    }
    printf("Before:\n");
    //print each element of the array before the division
    for(int i = 0; i < n; i++)
    {
        //set a 3 digit decimal precision
        printf("%0.3f ", dyn_arr[i]);
    }
    printf("\n");
    //call the function to divide each element of the array by 5
    divby5(dyn_arr, n);
    printf("After:\n");
    //print each element of the array after the division
    for(int i = 0; i < n; i++)
    {
        //set a 3 digit decimal precision
        printf("%0.3f ", dyn_arr[i]);
    }
    printf("\n");
    //free the allocated memory
    free(dyn_arr);

    return 0;
}
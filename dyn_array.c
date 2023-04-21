/*
CH-230-A
a4_p9.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n)
{
    int greatest = arr[0]; //first element of the array
    int smallest = arr[0]; //first element of the array
    for(int i = 0; i < n; i++)
    {
        //if the current element is greater than greatest
        //make greatest equal to this element
        //if the current element is less than smallest
        //make smallest equal to this element
        if(arr[i] > greatest)
        {
            greatest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return greatest*smallest; //return the product
}

int main()
{
    int *arr;
    int n;
    printf("How many elements?: ");
    scanf("%d", &n);
    //allocate the memory according to the user input
    arr = (int*) malloc(sizeof(int) * n); 

    if(arr == NULL) //check if the allocation is valid
    {
        exit(1);
    }
    else
    {
        for(int i = 0; i < n; i++) //populate the array
        {
            printf("Enter an integer: ");
            scanf("%d", &arr[i]);
        }
    }
    //call the function and use it to print the result of the product
    printf("The product of the smallest and the greatest numbers ");
    printf("in the array is: %d", prodminmax(arr, n));
    free(arr); //deallocate the memory
    return 0;
}
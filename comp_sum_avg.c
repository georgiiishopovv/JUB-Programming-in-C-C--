/*
CH-230-A
a3_p8.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

float sum(int size, float arr[size])
{
    float sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];//sum all elements of the array
    }
    return sum;
}
float average(int size, float arr[size])
{
    float sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum/size;//divide the sum by the number of elements in the array
}

int main(void) 
{
    float number;
    float arr[10];
    int count = 0;

    for(int i = 0; i < 10; i++)//max 10 numbers in the array
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number != -99.0)//if the number is different than -99, add it to the array
        {
            arr[i] = number;
            count++;//store the actual size of the array
        }
        else
        {
            break;//if the input equals -99, stop
        }
    }
    printf("The sum of all numbers is: %f\n", sum(count, arr));
    printf("The average of all numbers is: %f\n", average(count, arr));

    return 0;
}
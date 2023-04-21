/*
CH-230-A
a4_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int count)
{
    float product = 1; //1 does not change the result of multiplication
    for(int i = 0; i < count; i++) //compute the product of all elements
    {
        product *= arr[i];
    }
    //use the formula to compute the geometric mean
    return pow((double)product, (1.0/count)); //pow requires double parameters
}
float highest(float arr[], int count)
{
    float highest = arr[0]; //assign highest as the first element in the array
    for(int i = 1; i < count; i++)
    {
        if(arr[i] > highest)
        {
            highest = arr[i];
        }
        //if any element is higher than the current value of highest
        //replace the value of highest with that element
    }
    return highest;
}
float lowest(float arr[], int count)
{
    float lowest = arr[0]; //assign lowest as the first element in the array
    for(int i = 1; i < count; i++)
    {
        if(arr[i] < lowest)
        {
            lowest = arr[i];
        }
        //if any element is lower than the current value of lowest
        //replace the value of lowest with that element
    }
    return lowest;
}
float sum(float arr[], int count)
{
    float sum = 0;
    for(int i = 0; i < count; i++) //sum all elements in the array
    {
        sum += arr[i]; 
    }
    return sum;
}

int main()
{
    float arr[15]; 
    float number;
    int count;
    for(int i = 0; i < 15; i++)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number >= 0) //check if the input is positive
        {
            arr[i] = number;
            count++; //storing the actual number of elements
        }
        else
        {
            break;
        }
    }
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    //we need a switch statement in order to call
    //the corresponding functions for each case
    switch(c)
    {
        case 'm': 
            printf("The geometric mean is: %f", geometric_mean(arr, count));
            break;
        case 'h':        
            printf("The highest number is: %f", highest(arr, count));
            break;
        case 'l':
            printf("The lowest number is: %f", lowest(arr, count));
            break;
        case 's':
            printf("The sum is: %f", sum(arr, count));
            break;           
    }
}
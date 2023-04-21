/*
CH-230-A
a3_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main(void) 
{
    char c;
    scanf("%c", &c);
    int n;
    scanf("%d", &n);
    double arr[n];
    double sum;

    for(int i = 0; i < n; i++) //populate the array
    {
        scanf("%lf", &arr[i]);
    }
    switch (c) //go through all possible cases for the character
    {
        case 's':
            for(int i = 0; i < n; i++)
            {
                sum += arr[i]; //sum all elements of the array
            }
            printf("The sum is %lf", sum);
            break;

        case 'p':
            printf("List of all temperatures:\n");
            for(int i = 0; i < n; i++)
            {
                printf("%lf\n", arr[i]); //print every element of the array
            }
            break;

        case 't':
            printf("List of all temperatures in Fahrenheit:\n");
            for(int i = 0; i < n; i++)
            {
                printf("%lf\n", arr[i]*(9/5.0) + 32); //print every element in Fahrenheit
            }
            break;

        default: //for any other character input
            for(int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            //divide the sum by the number of elements
            printf("The average of all temperatures is = %lf\n", sum/n); 
            break;

    }
    return 0;
}
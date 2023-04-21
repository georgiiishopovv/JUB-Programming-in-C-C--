/*
CH-230-A
a5_p10.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void counting_down(int n)
{
    //the funtion calls itself and prints the value of n until it is 1
    //we subtract 1 from n before every recursive call, so that all numbers
    //from n to 1 are printed
    if(n == 1)
    {
        printf("1");
    }
    else
    {
        printf("%d\n", n);
        counting_down(n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Counting down from %d:\n", n);
    //call the recursive function to print the results
    counting_down(n);

    return 0;
}
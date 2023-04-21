/*
CH-230-A
a5_p1.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void triangle(int n, char ch)
{
    //iterate through the array row by row and column by column
    //each row should have one element less, so the limit of
    //j(columns) changes according to the value of i
    for(int i = 0; i < n; i++)
    {
        for(int j = n - i; j > 0; j--)
        {
            printf("%c", ch); 
        }
        printf("\n"); //separate the rows
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    char ch;
    scanf(" %c", &ch); //neglect the enter from previous user input
    triangle(n, ch); //call the function to print the shape

    return 0;
}
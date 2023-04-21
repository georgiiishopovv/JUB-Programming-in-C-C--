/*
CH-230-A
a3_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c)
{
    for(int i = 1; i <= n; i++)//determines the number of rows
    {
        for(int j = 1; j <= m+i-1; j++)//determines the number of characters per row
        {
            printf("%c", c);
        }
        printf("\n");//distinguishes between rows
    }
}


int main(void) 
{
    int n;
    int m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf(" %c", &c);

    print_form(n, m, c);//call function to print shape

    return 0;
}
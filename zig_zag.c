/*
CH-230-A
a4_p2.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char input_string[50];
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strlen(input_string)-1] = '\0'; //remove the enter
    for(int i = 0; i < strlen(input_string); i++)
    {
        //every element at odd position should be printed with space
        if(i % 2 == 0)
        {
            printf("%c\n", input_string[i]);
        }
        else
        {
            printf(" %c\n", input_string[i]);
        }
    }
    return 0;
}
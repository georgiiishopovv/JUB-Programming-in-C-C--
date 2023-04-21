/*
CH-230-A
a3_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {

    }
    //the return statement is performed during the first iteration
    //put "{}" to keep the return statement outside the loop
    //and allow the loop to meet its termination condition
    return idx;
    /* do nothing */
}
int main() {
    char line[80];
    while (1) 
    {
    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}

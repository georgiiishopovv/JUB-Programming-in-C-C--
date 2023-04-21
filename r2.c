/*
CH-230-A
a2_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change(char *ptr)
{
    char *ptr_copy = (char *) malloc(sizeof(int)*5);
    strcpy(ptr_copy, ptr);
    printf("%s", ptr_copy);

}

int main()
{
    char string[] = "Hello";
    change(string);
}
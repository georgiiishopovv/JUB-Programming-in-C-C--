/*
CH-230-A
a5_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char string1[100];
    fgets(string1, 100, stdin);
    //remove the enter
    string1[strlen(string1)-1] = '\0';
    char string2 [100];
    fgets(string2, 100, stdin);
    //remove the enter
    string2[strlen(string2)-1] = '\0';

    char *dyn_string;
    //allocate dynamic memory for the result of the concatenation
    //the size of the dynamic array should be the 
    //sum of the lengths of the two strings
    dyn_string = (char*) malloc(sizeof(char)*(strlen(string1)+strlen(string2)));
    //concatenate both strings into the dynamic array
    strcat(dyn_string, string1);
    strcat(dyn_string, string2);
    //print the content of the dynamic array
    printf("Result of concatenation: %s\n", dyn_string);
    //free the allocated memory
    free(dyn_string);

    return 0;
}
/*
CH-230-A
a4_p11.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int count_insensitive(char *str, char c)
{
    int c_occurence = 0; 
    //iterate through the array and see if any element equals the character c
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == tolower(c) || str[i] == toupper(c))
        {
            c_occurence++; //count the number of occurences of c in the string
        }
    }
    return c_occurence;
}

int main()
{
    char *str, *new_str;
    str = (char*) malloc(sizeof(char)*50); //allocate memory
    fgets(str, 50, stdin); //get user input for the string
    str[strlen(str)-1] = '\0'; //replace the enter 
    //allocate memory according to user input
    new_str = (char*) malloc(sizeof(char)*strlen(str));
    strcpy(new_str, str); //copy the content of str into new_str
    free(str); //deallocate the memory of str
    //check the occurence of different characters in the string
    printf("The character 'b' occurs %d times.\n", count_insensitive(new_str, 'b'));
    printf("The character 'H' occurs %d times.\n", count_insensitive(new_str, 'H'));
    printf("The character '8' occurs %d times.\n", count_insensitive(new_str, '8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(new_str, 'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(new_str, '$'));
    free(new_str); //deallocate the memory of new_str

    return 0;
}
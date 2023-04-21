/*
CH-230-A
a4_p12.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e)
{
    //iterate through the string and replace every 
    //occurence of char c with char e
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == tolower(c) || str[i] == toupper(c))
        {
            str[i] = e;
        }
    }
}

int main()
{   
    char string[80];
    char c;
    char e;
    while(1)
    {
        printf("Enter a string: ");
        fgets(string, sizeof(string), stdin);
        string[strlen(string)-1]= '\0'; //remove the enter
        if(strcmp(string, "stop") == 0) //exit the loop if the user inputs stop
        {
            exit(1);
        }
        else
        {
            //ask the user about the character and its replacement
            printf("Which character should be replaced: ");
            scanf("%c", &c);
            printf("Which is the replacing character: ");
            scanf(" %c", &e); //neglect the enter from previous input
            //print the character to be replaced, its replacement, the original string
            printf("Character to be replaced: %c\n", c);
            printf("Replacing character: %c\n", e);
            printf("String before replacing: %s\n", string);
            //call the function to replace the characters in the string
            replaceAll(string, c, e);
            //print the string after the changes
            printf("String after replacing: %s\n", string);
        }
        getchar();
    }
    return 0;
}
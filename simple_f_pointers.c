/*
CH-230-A
a7_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void all_uppercase(char string[100])
{
    char *string_copy = (char *) malloc(sizeof(char) * 100);
    if(string_copy == NULL)
    {   
        exit(1); 
    }

    //store a copy of the original string
    strcpy(string_copy, string);

    //turn all letters into uppercase
    for(int i = 0; i < strlen(string); i++)
    {
        string_copy[i] = toupper(string_copy[i]);
    }

    printf("%s\n", string_copy);
    free(string_copy);
}

void all_lowercase(char string[100])
{
    char *string_copy = (char *) malloc(sizeof(char) * 100);
    if(string_copy == NULL) 
    {
        exit(1);
    }

    //store a copy of the original string
    strcpy(string_copy, string);

    //turn all letters into lowercase
    for(int i = 0; i < strlen(string); i++)
    {
        string_copy[i] = tolower(string_copy[i]);
    }

    printf("%s\n", string_copy);
    free(string_copy);
}

void switch_upper_lower(char string[100])
{
    char *string_copy = (char *) malloc(sizeof(char) * 100);
    if(string_copy == NULL) 
    {
        exit(1);
    }

    //store a copy of the original string
    strcpy(string_copy, string);

    //swap all lowercase with uppercase and vice versa
    for(int i = 0; i < strlen(string); i++)
    {
        if(islower(string_copy[i]))
        {
            string_copy[i] = toupper(string_copy[i]);
        }
        else if(isupper(string_copy[i]))
        {
            string_copy[i] = tolower(string_copy[i]);
        }
    }

    printf("%s\n", string_copy);
    free(string_copy);
}

void terminate(char string[100])
{
    exit(1);
}

//array of function pointers
void (*func_arr[4]) (char string[100]) = {all_uppercase, all_lowercase, 
                                          switch_upper_lower, terminate};

int main()
{
    char string[100];
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';
    
    while(1)
    {
        char command;
        scanf("%c", &command);
        getchar();

        //convert the character to integer
        int num = command - '0';

        //use array of function pointers to call the corresponding functions    
        (*func_arr[num-1]) (string);  
    }
    return 0;
}
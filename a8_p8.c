/*
CH-230-A
a8_p8.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char current;
    char prev;
    char name1[30];
    fgets(name1, 30, stdin);
    name1[strlen(name1) - 1] = '\0';

    //open the file for reading
    FILE *fptr;
    fptr = fopen(name1, "r");

    if(fptr == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    int count = 0;
    prev = getc(fptr);
    current = getc(fptr);
    
    while(current != EOF)
    {
        if(current == ' ' || current == ',' || current == '?' || 
          current == '!' || current == '.' || current == '\t' || 
          current == '\r' || current == '\n')
        {
            if(prev == ' ' || prev == ',' || prev == '?' || prev == '!' ||
               prev == '.' || prev == '\t' || prev == '\r' || prev == '\n')
            {
                //if the prev and current character are any of the termination
                //characters, just move both to the next characters
                prev = current;
            }
            else 
            {
                //if only the current character is any of the termination 
                //characters, we have a word
                count++;
            }
        }
        prev = current;
        current = getc(fptr); 
    }
    printf("The file contains %d words.", count);
    fclose(fptr);
    return 0;
}
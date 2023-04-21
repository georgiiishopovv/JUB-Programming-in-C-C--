/*
CH-230-A
a5_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_lower(char* str) 
{
    int count;
    //go through every character of the string using a pointer
    //for every lowercase character increase the value of count
    //at the end return count (total number of lowercase characters)   
    for(int i = 0; i < strlen(str); i++)
    {
        if(islower(str[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char *str_ptr;
    char string[50];
    //repeatedly read a string
    while(1)
    {
        fgets(string, 50, stdin);
        //the pointer points to the first element of the array
        str_ptr = string; 
        //if the string is not empty implement the count_lower() function
        //and print the total number of lowercase characters in the string
        if(str_ptr[0] != '\n')
        {
           printf("Number of lowercase characters: %d\n", count_lower(str_ptr)); 
        }
        //if the string is empty, exit the loop and stop execution
        else
        {
            exit(1);
        }
    }

    return 0;
}
/*
CH-230-A
a4_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[])
{
    //create a char array that contains all consonants
    char consonant[] = {'B', 'C', 'D', 'F', 'G', 'J', 'K', 'L', 'M', 
                          'N', 'P', 'Q', 'S', 'T', 'V', 'X', 'Z', 'H', 
                          'R', 'W', 'Y', 'b', 'c', 'd', 'f', 'g', 'j', 'k', 'l', 'm', 'n',
                        'p', 'q', 's', 't', 'v', 'x', 'z', 'h', 'r', 'w', 'y'};
    int count;
    char *string_ptr;
    //assign the pointer to the first element of the string
    //check if a string termination character occurs
    //use address arithmetic to go through the string
    for(string_ptr = &str[0]; *string_ptr != '\0'; string_ptr++)
    {
        //iterate through the constants array
        for(int j = 0; j < strlen(consonant); j++)
        {
            //compare the elements of the two arrays
            if(*string_ptr == consonant[j])
            {
                count++; //count the number of valid comparisons
            }
        }
    }
    return count;
}

int main()
{
    char string[100];
    while(string[0] != '\n') //iterate as long as the string is not empty
    {
        
        fgets(string, sizeof(string), stdin);
        if(string[0] == '\n') //exit the loop if the string is empty
        {
            break;
        }
        printf("Number of consonants=%d\n", count_consonants(string));
    }
    return 0;
}
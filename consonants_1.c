/*
CH-230-A
a4_p4.[c]
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
    //go through all elements of the string
    for(int i = 0; i < strlen(str); i++)
    {
        //go through all elements of the consonants array
        for(int j = 0; j < strlen(consonant); j++) 
        {
            if(str[i] == consonant[j]) //compare the elements of both arrays
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
        if(string[0] == '\n') //exit the loop when the string is empty
        {
            break;
        }
        printf("Number of consonants=%d\n", count_consonants(string));
    }
    return 0;
}
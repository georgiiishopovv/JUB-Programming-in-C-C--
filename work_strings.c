/*
CH-230-A
a3_p11.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(void) 
{
    char one[100];
    char two[100];
    char three[100];
    char c;
    char *c_ptr;
    fgets (one, sizeof(one), stdin);  
    fgets (two, sizeof(two), stdin);
    one[strlen(one)-1] = '\0'; //remove the enter from the strings
    two[strlen(two)-1] = '\0';
    scanf(" %c", &c);
    int size_one = strlen(one); //fnd the lengths
    int size_two = strlen(two);
    printf("length1=%d\n", size_one);
    printf("length2=%d\n", size_two);
    strcat(one, two); //concatenate the arrays
    printf("concatenation=%s\n", one);
    strcpy(three, two); //copy the content of two into three
    printf("copy=%s\n", three);
    if(strcmp(one, two) < 0) //compare the two strigs
    {
        printf("one is smaller than two\n");
    }
    else if(strcmp(one, two) > 0)
    {
        printf("one is larger than two\n");
    }
    else if(strcmp(one, two) == 0)
    {
        printf("one is equal to two\n");
    }
    c_ptr = strchr(two, c);//get the address of the character in the string
    if(c_ptr != NULL)
    {
        printf("position=%ld\n", c_ptr-two); 
        //print the position of the character
        //address of character - address of first character
    }
    else
    {
        printf("The character is not in the string\n");
    }
    return 0;
}

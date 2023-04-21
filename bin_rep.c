/*
CH-230-A
a6_p6.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char a;
    scanf("%c", &a);
    int decimal = a;
    //print the decimal representation of the character
    printf("The decimal representation is: %d\n", decimal);
    printf("The binary representation is: ");
    //iterate through all bits of the character
    for(int i = 0; i < 8; i++)
    {
        //since 128 = 10000000, only the first bit might 
        //satisfy the condition (a & 1)
        //check whether the first bit is 0 or 1 and print the results
        //the bits will be printed in order as we start from the beginning
        if(a & 128)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        //shift the bits 1 to the left so that every original bit
        //of the character becomes first at some point
        a = a << 1;
    }
    printf("\n");
    
    return 0;
}
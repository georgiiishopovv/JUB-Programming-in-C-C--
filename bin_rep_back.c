/*
CH-230-A
a6_p5.[c]
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
    int bits = 0;
    //determine the actual bits of the character by looking at its decimal
    //omit the added zeroes
    while(decimal > 0)
    {
        bits++;
        decimal = decimal / 2;
    }
    printf("The backwards binary representation is: ");
    //iterate through all bits of the character
    for(int i = 0; i < bits; i++)
    {
        //since 1 = 00000001, only the least significant bit might 
        //satisfy the condition (a & 1)
        //check whether the last bit is 0 or 1 and print the results
        //the bits will be reversed, since we start printing from the back
        if(a & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        //shift the bits 1 to the right, so that all original bits
        //of the character become least significant at some point
        a = a >> 1;
    }
    printf("\n");

    return 0;
}
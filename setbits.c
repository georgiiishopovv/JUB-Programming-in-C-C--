/*
CH-230-A
a6_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

//set the corresponding bits to 1
unsigned char set3bits(unsigned char a, int num1, int num2, int num3)
{
    a |= (1 << num1);
    a |= (1 << num2);
    a |= (1 << num3);

    //return the character with the new bits
    return a;
}

int main()
{
    unsigned char a;
    scanf("%c", &a);
    getchar();
    int num1, num2, num3;
    //read the bits that need to be changed
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    //print the decimal representation of the character
    printf("The decimal representation is: %d\n", a);
    printf("The binary representation is: ");
    //create a copy of the character, so that when shifting is used
    //during the printing, we will still have the original character
    unsigned char a_copy = a; 
    //iterate through all bits of the character
    for(int i = 0; i < 8; i++)
    {
        //since 128 = 10000000, only the first bit might 
        //satisfy the condition (a & 1)
        //check whether the first bit is 0 or 1 and print the results
        //the bits will be printed in order as we start from the beginning
        if(a_copy & 128)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        //shift the bits 1 to the left so that every original bit
        //of the character becomes first at some point
        a_copy = a_copy << 1;
    }
    printf("\n");  
    //call the function to set the bits
    //set the original character to be equal to the result char of the function
    a = set3bits(a, num1, num2, num3);
    //print the bits of the new character using the same method as before
    printf("After setting the bits: ");
    for(int i = 0; i < 8; i++)
    {
        if(a & 128)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        a = a << 1;
    }
    printf("\n");

    return 0;
}
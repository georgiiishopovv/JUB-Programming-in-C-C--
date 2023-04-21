/*
CH-230-A
a6_p2.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

//since 1 = 00000001, only the least significant bit may 
//satisfy the condition (a & 1)
//the macro checks if the least significant bit of the character is 1 or 0
//and assigns the corresponding value
#define BIT(a, least_bit) {if(a & 1){least_bit=1;}\
else{least_bit=0;}}

int main()
{
    unsigned char a;
    //read an unsigned char
    scanf("%c", &a);
    //print the decimal representation of the character
    printf("The decimal representation is: %d\n", a);
    int least_bit;
    //call the macro to determine the least significant bit
    BIT(a, least_bit);
    //print the result of the macro
    printf("The least significant bit is: %d\n", least_bit);

    return 0;
}
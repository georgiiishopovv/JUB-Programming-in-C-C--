/*
CH-230-A
a3_p6.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g)
{
    return (kg*2.2) + (g*2.2)/1000; //1 kg = 1000 grams/2.2 pounds
}

int main(void) 
{
    int kg;
    int g;
    scanf("%d", &kg);
    scanf("%d", &g);

    printf("Result of conversion: %f\n", to_pounds(kg, g));

    return 0;
}
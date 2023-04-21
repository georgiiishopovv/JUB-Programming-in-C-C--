/*
CH-230-A
a4_p1.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float lower;
    float upper;
    float increment; 
    scanf("%f", &lower);
    scanf("%f", &upper);
    scanf("%f", &increment);

    for (float i = lower; i <= upper; i += increment) //iterate until lower bound equals upper bound
    {
        printf("%f ", i);
        printf("%f ", i*i*M_PI); //calculate the area using math library
        printf("%f", 2*M_PI*i); //calculate the perimeter using math library
        printf("\n");
    }
    return 0;
}
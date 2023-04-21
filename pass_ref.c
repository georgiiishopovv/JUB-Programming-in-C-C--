/*
CH-230-A
a2_p10.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

 void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
 {
    //change the values by reference
    *prod = a*b;
    *div = a/b;
    *pwr = pow((double)a, (double)b); //pow requires double parameters
    *invb = 1/b;
 }

int main()
{
    float a;
    scanf("%f", &a);
    float b;
    scanf("%f", &b);
    float prod = 0;
    float div = 0; 
    float pwr = 0;
    float invb = 0; 

    //input arguments as reference types using &
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    //print the results using the variables that were changed by reference
    printf("The product of a and b is: %f\n", prod); 
    printf("The division of a and b is: %f\n", div);
    printf("The result of a^b is: %lf\n", pwr);
    printf("The result of 1/b is: %f\n", invb);
    
    return 0;
}
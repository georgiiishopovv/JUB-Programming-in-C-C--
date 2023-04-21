/*
CH-230-A
a3_p10.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b)
{
    return a*b;
}
void productbyref(float a, float b, float *p)
{
    float prod = product(a, b);
    p = &prod; //store the product in the pointer
    printf("Second function's result=%f\n", *p); //print the reference of pointer
}
void modifybyref(float *a, float *b)
{
    *a += 3; //modify the variable through its pointer
    *b += 11; //modify the variable through its pointer
    printf("Third function: a = %f, b = %f\n", *a, *b);
}

int main(void) 
{
    float a;
    float b;
    float *p_ptr;
    float *a_ptr;
    float *b_ptr;
    scanf("%f", &a);
    scanf("%f", &b); 
    a_ptr = &a;
    b_ptr = &b;

    printf("First function's results=%f\n", product(a, b));
    productbyref(a, b, p_ptr);
    modifybyref(a_ptr, b_ptr);

    return 0;
}

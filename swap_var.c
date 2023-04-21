/*
CH-230-A
a6_p1.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
//define a macro for swapping the values of two variables
//create a new variable of a certain type to help with the swapping
#define SWAP(type, var1, var2) {type var; (var) = (var1);\
(var1) = (var2); (var2) = (var);}

int main() 
{
    int var1;
    scanf("%d", &var1);
    int var2;
    scanf("%d", &var2);
    double var3;
    scanf("%lf", &var3);
    double var4;
    scanf("%lf", &var4);

    //swap the integer variables using the macro
    SWAP(int, var1, var2);
    //swap the double variables using the macro
    SWAP(double, var3, var4);
    //print the results
    printf("After swapping:\n");
    printf("%d\n", var1);
    printf("%d\n", var2);
    //include a floating point precision of 6 for the doubles
    printf("%0.6lf\n", var3);
    printf("%0.6lf\n", var4);   

    return 0; 
}
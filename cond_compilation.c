/*
CH-230-A
a6_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

//use a loop to find the intermediate results at each position
//print the intermediate results
#define INTERMEDIATE(n, vector1, vector2) {\
printf("The intermediate product values are:\n");for(int i = 0; i < n; i++){\
printf("%d\n", vector1[i]*vector2[i]);}}

int main()
{
    //read the dimensions of the vectors
    int n;
    scanf("%d", &n);
    //create and populate the first vector with n components
    int v[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    //create and populate the second vector with n components
    int w[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
    }

    int sum = 0;
    //multiply the corresponding elements of the two vectors
    //sum all products
    //return the sum of the products = scalar product
    for(int i = 0; i < n; i++)
    {
        sum += (v[i]*w[i]);
    }
    
    //check if the directory is defined or not and output the 
    //corresponding information
    #ifdef INTERMEDIATE
    INTERMEDIATE(n, v, w);
    printf("The scalar product is: %d", sum);
    #endif

    #ifndef INTERMEDIATE
    printf("The scalar product is: %d", sum);
    #endif

    return 0;
}


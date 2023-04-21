/*
CH-230-A
a5_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//find the smallest and largest components within vector w
//find the positions of the smallest and largest components within vector w
void smallest_largest_w(int n, double v[n], double w[n])
{
    //initialise variables to store the smallest and largest components of w
    //set them equal to the first component of w
    double smallest_w = w[0];
    double largest_w = w[0];
    int smallest_position_w;
    int largest_position_w;
    //go through every component of vector w
    //if any component is less than smallest_w, set smallest_w equal to that
    //if any component is greater than largest_w, set largest_w equal to that
    for(int i = 0; i < n; i++)
    {
        if(w[i] < smallest_w)
        {
            smallest_w = w[i];
        }
        if(w[i] > largest_w)
        {
            largest_w = w[i];
        }
    }
    //go through the vector and find the position of the smallest component
    for(int i = 0; i < n; i++)
    {
        if(w[i] == smallest_w)
        {
            smallest_position_w = i;
            //we only need the first occurence of the component
            break;
        }
    }
    //go through the vector and find the position of the largest component
    for(int i = 0; i < n; i++)
    {
        if(w[i] == largest_w)
        {
            largest_position_w = i;
            //we only need the first occurence of the component
            break;
        }
    }
    //print the results
    printf("The smallest = %lf\n", smallest_w);
    printf("Position of smallest = %d\n", smallest_position_w);
    printf("The largest = %lf\n", largest_w);    
    printf("Position of largest = %d\n", largest_position_w);
}

//find the smallest and largest components within vector v
//find the positions of the smallest and largest components within vector v
void smallest_largest_v(int n, double v[n], double w[n])
{
    //initialise variables to store the smallest and largest components of v
    //set them equal to the first component of v
    double smallest_v = v[0];
    double largest_v = v[0];
    int smallest_position_v;
    int largest_position_v;
    //go through every component of vector v
    //if any component is less than smallest_v, set smallest_v equal to that
    //if any component is greater than largest_v, set largest_v equal to that
    for(int i = 0; i < n; i++)
    {
        if(v[i] < smallest_v)
        {
            smallest_v = v[i];
        }
        if(v[i] > largest_v)
        {
            largest_v = v[i];
        }
    }
    //go through the vector and find the position of the smallest component
    for(int i = 0; i < n; i++)
    {
        if(v[i] == smallest_v)
        {
            smallest_position_v = i;
            //we only need the first occurence of the component
            break;
        }
    }
    //go through the vector and find the position of the largest component
    for(int i = 0; i < n; i++)
    {
        if(v[i] == largest_v)
        {
            largest_position_v = i;
            //we only need the first occurence of the component
            break;
        }
    }
    //print the results
    printf("The smallest = %lf\n", smallest_v);
    printf("Position of smallest = %d\n", smallest_position_v);
    printf("The largest = %lf\n", largest_v);    
    printf("Position of largest = %d\n", largest_position_v);
}

//compute the scalar product of the two vectors
double scalar_product(int n, double v[n], double w[n])
{
    double sum = 0;
    //multiply the corresponding elements of the two vectors
    //sum all products
    //return the sum of the products = scalar product
    for(int i = 0; i < n; i++)
    {
        sum += (v[i]*w[i]);
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    //create and populate the first vector with n components
    double v[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }
    //create and populate the second vector with n components
    double w[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &w[i]);
    }
    //call the corresponding functions and print the needed information
    printf("Scalar product=%lf\n", scalar_product(n, v, w));
    smallest_largest_v(n, v, w);
    smallest_largest_w(n, v, w);

    return 0;
}
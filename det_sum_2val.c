/*
CH-230-A
a3_p9.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n)
{
    if(n < 3 || n < 6) //positions start at 0, so position 2 is the third element
    {
        return -111;
    }
    else
    {
        return v[2] + v[5];
    }
}

int main(void) 
{
    int n;
    scanf("%d", &n);
    double arr[n];
    if(n <= 20)//the array should not have more than 20 elements
    {
         for(int i = 0; i < n; i++)
        {
            scanf("%lf", &arr[i]);//populate the array
        }
    }
    else 
    {
        scanf("%d", &n);//new input for "n" if over 20
    }
    if(sum25(arr, n) == -111.0)
    {
        printf("One or both positions are invalid\n");
    }
    else
    {
        printf("sum=%lf\n", sum25(arr, n));
    }
    
    return 0;
}

/*
CH-230-A
a6_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
//create a macro that determines the greatest number
//store the value of the greatest number inside a variable
#define MAX(a, b, c, max) {if(a > b){if(a > c){max = a;}else{max = c;}}\
else if(b > a){if(b > c){max = b;}else{max = c;}}}

//create a macro that determines the smallest number
//store the value of the smallest number inside a variable
#define MIN(a, b, c, min){if(a < b){if(a < c){min = a;}else{min = c;}}\
else if(b < a){if(b < c){min = b;}else{min = c;}}}

//calculate the mid range of the numbers using the results 
//from the MAX and MIN macros
//store the mid range in a variable
#define MID_RANGE(max, min, mid_range){mid_range = ((min) + (max))/(2.0);}

int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    //initialise the variables that will be used to store the results of
    //the macros
    int max = 0;
    int min = 0;
    float mid_range = 0;
    //call the macro to determine the max
    MAX(a, b, c, max);
    //call the macro to determine the min
    MIN(a, b, c, min);
    //call the macro to determine the mid range
    MID_RANGE(max, min, mid_range);
    //print the result with a floating point precision of 6
    printf("The mid-range is: %.6f\n", mid_range);

    return 0;
}
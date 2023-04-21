/*
CH-230-A
a5_p11.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int prime(int x, int divisor)
{
    //the function recursively goes through every possible divisor of the number
    //by subtracting one from it per every recursive call
    //if at some point the division is valid, the function returns zero
    //if the divisor gets to 1, the function returns 1, since the number 
    //does not have any divisors except for 1 and itself
    //if the number is 1, then the function automatically returns 0
    if(x == 1)
    {
        return 0;
    }
    else if(divisor == 1)
    {
        return 1;
    }
    else if(x % divisor == 0)
    {
        return 0;
    }
    else
    {
        return prime(x, divisor-1);
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    //the greatest divisor a number can have is its half (integer)
    int greatest_divisor = x / 2;

    //store the returned result of the recursive funtcion into a variable
    int prime_check = prime(x, greatest_divisor);
    //if the function returned 0, the number is not prime
    //if the function returned 1, the number is prime
    //print out the corresponding results
    if(prime_check == 0)
    {
        printf("%d is not prime\n", x);
    }
    else if(prime_check == 1)
    {
        printf("%d is prime\n", x);
    }

    return 0;
}
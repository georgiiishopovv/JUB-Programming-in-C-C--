#include <stdio.h>
#include <stdbool.h>

void odd(unsigned char data)
{
    if(data & 1)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}

int main()
{
    unsigned char a;
    scanf("%c", &a);
    odd(a);
    // if(odd(a))
    // {
    //     printf("True");
    // }
    // else
    // {
    //     printf("False");
    // }
}
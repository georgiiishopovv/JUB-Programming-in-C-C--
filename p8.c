#include <stdio.h>

void recursion(int nr)
{
    if(nr == 1)
    {
        printf("1 ");
    }
    else if(nr % 2 == 1)
    {
        printf("%d ", nr);
        recursion(nr-1);
    }
    else
    {
        recursion(nr-1);
    }
}

int main()
{
    recursion(5);
}
/*
CH-230-A
a8_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void converting(struct stack *a, unsigned int num)
{
    int remainder = 0;
    
    //terminate when the initial number equals 0
    while(num != 0)
    {
        remainder = num % 2;
        num = num / 2;
        
        //put the remainder into the array
        push(a, remainder);
    }
}


void push(struct stack *a, unsigned int num)
{
    //check if the stack is full
    if(a->count == 12)
    {
        printf("Pushing Stack Overflow\n");
    }
    else 
    {
        //printf("Pushing %d\n", num);
        a->array[a->count] = num;
        a->count = a->count + 1;
    } 
}

/*
void pop(struct stack *a, int (*fct) (struct stack *a))
{
    //check if the stack is empty using a function pointer
    if(fct(a) == 1)
    {
        printf("Popping Stack Underflow\n");
    }
    else 
    {   
        printf("Popping %d\n", a->array[a->count-1]);
        a->count = a->count - 1;
    }
}

void empty(struct stack *a, int (*fct) (struct stack *a))
{
    //check if the stack is empty using a function pointer
    if(fct(a) == 1)
    {
        printf("Popping Stack Underflow\n");
    }
    else 
    {
        //print all the element that are popped out of the array
        printf("Emptying Stack ");
        for(int i = a->count-1; i >= 0; i--)
        {
            printf("%d ", a->array[i]);
        }
        printf("\n");
        a->count = 0;
    }
}

//check if the stack is empty and return a corresponding result
int isEmpty(struct stack *a)
{
    int empt = 0;
    if(a->count == 0)
    {
        empt = 1;
    }
    return empt;
}
*/
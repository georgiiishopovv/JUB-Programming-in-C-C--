/*
CH-230-A
a7_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    unsigned int count;
    int array[12];
};


void push(struct stack *a, int num)
{
    //check if the stack is full
    if(a->count == 12)
    {
        printf("Pushing Stack Overflow\n");
    }
    else 
    {
        printf("Pushing %d\n", num);
        a->array[a->count] = num;
        a->count = a->count + 1;
    } 
}

void pop(struct stack *a, int (*fct) (struct stack *a))
{
    //check if the stack is empty using a pointer function
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
    //check if the stack is empty using a pointer function
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

int main()
{ 
    struct stack *stack1;
    
    //allocate memory for the stack
    stack1 = (struct stack *) malloc(sizeof(struct stack));
    if(stack1 == NULL)
    {
        exit(1);
    }
    stack1->count = 0;
    char command;
    int num;

    while(1)
    {
        scanf("%c", &command);
        getchar();

        //call the corresponding functions
        switch(command)
        {
            case 's':
                scanf("%d", &num);
                getchar();
                push(stack1, num);
                break;
            case 'p':
                pop(stack1, &isEmpty);
                break; 
            case 'e':
                empty(stack1, &isEmpty);
                break;
            case 'q':
                printf("Quit");
                printf("\n");
                exit(1);
                break;
            default:
                break;
        }
    }

    //free the memory allocated for the stack;
    free(stack1);

    return 0;
}
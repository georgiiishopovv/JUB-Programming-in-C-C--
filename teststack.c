/*
CH-230-A
a7_p7.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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
            case 'c':
                scanf("%d", &num);
                getchar();
                converting(stack1, num);
                printf("The binary representation of %d is ", num);
                for(int i = stack1->count - 1; i >= 0; i--)
                {
                    printf("%d", stack1->array[i]);
                }
            default:
                break;
        }
    }

    //free the memory allocated for the stack;
    free(stack1);

    return 0;
}
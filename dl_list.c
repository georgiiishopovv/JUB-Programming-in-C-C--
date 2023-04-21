/*
CH-230-A
a7_p2.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    char info;
    struct list *next;
    struct list *prev;
};

//print the elements of the list
void print(struct list *my_list)
{
    struct list* i;
    for(i = my_list; i; i = i->next)
    {
        printf("%c ", i->info);
    }
    printf("\n");
}

//add an element to the front of the list
struct list *add_front(struct list *my_list, char a)
{
    struct list *element_front;
    element_front = (struct list*) malloc(sizeof(struct list));
    if(element_front == NULL)
    {
        printf("Error allocating memory!\n");  
        return my_list;       
    }

    //add a value to the new node and set its connections
    element_front->info = a;
    element_front->next = my_list;
    element_front->prev = NULL;

    //do not want a null to point to a node
    if(my_list == NULL)
    {
        return element_front;
    }

    my_list->prev = element_front;
    my_list = element_front;
    return my_list;
}

//remove all occurences of a character
struct list *remove_character(struct list *my_list, char a)
{
    struct list *copy2;
    copy2 = my_list;

    //introduce a variable that checks if the character is in the list
    int correct_element = 0;

    if(my_list == NULL)
    {
        return my_list;
    }

    while(copy2 != NULL)
    {
        struct list *next = copy2->next;
        if(copy2->info == a)
        {   
            //check if there is a node before current
            if(copy2->prev != NULL) 
            {
                copy2->prev->next = copy2->next;
            }

            //check if there is a node after current
            if(copy2->next != NULL) 
            {
                copy2->next->prev = copy2->prev;
            }

            //check if the element is at head position
            if(copy2 == my_list)
            {
                my_list = next;
            } 
            
            free(copy2);
            copy2 = next;
            correct_element = 1;
        }
        else 
        {
            copy2 = copy2->next;
        }
    }
    if(correct_element == 0)
    {
        printf("The element is not in the list!\n");
    }
    return my_list;
}

//print the element of the list backwards
void print_backwards(struct list *my_list)
{
    struct list *i;
    struct list *cursor = my_list;
    
    //go to the end of the list
    while(cursor->next != NULL)
    {
        cursor = cursor->next;
    }

    for(i = cursor; i; i = i->prev)
    {
        printf("%c ", i->info);
    }
    printf("\n");
}

//empty the list and deallocate its memory
void deallocate(struct list* my_list)
{
    struct list *next_element;
    while(my_list != NULL)
    {
        //free the memory for each element of the list
        next_element = my_list->next;
        free(my_list);
        my_list = next_element;
    }
}

int main()
{
    struct list *my_list = NULL;
    char a;
    int num;
    
    while(1)
    {   
        scanf("%d", &num);

        //call the corresponding functions
        switch(num)
        {
            case 1: 
                getchar();
                scanf("%c", &a);
                my_list = add_front(my_list, a);
                break;
            case 2:
                getchar();
                scanf("%c", &a);
                my_list = remove_character(my_list, a);
                break;
            case 3:
                print(my_list);
                break;
            case 4:
                print_backwards(my_list);
                break;
            case 5:
                deallocate(my_list);
                exit(1);
                break;
            default:
                break;
        }
    }
    return 0;
}







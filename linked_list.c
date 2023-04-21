/*
CH-230-A
a7_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//include the header file
#include "linked_list.h"

//add an element to the front of the list
struct list* front(struct list* listt, int value)
{
    struct list *add_front;
    add_front = (struct list *) malloc(sizeof(struct list));
    if(add_front == NULL)
    {
        printf("Error allocating memory!\n");  
        return listt;                      
    }
    add_front->info = value;
    //link the new list's element to the remaining of the list
    add_front->next = listt;  
    return add_front;  
}

//add an element to the back of the list
struct list* back(struct list* listt, int value)
{
    struct list *check, *add_back;
    check = listt;
    add_back = (struct list *) malloc(sizeof(struct list));
    if(add_back == NULL)
    {
        printf("Error allocating memory!\n");
        return listt;               
    }
    add_back->info = value;
    //make the element of the new list point to NULL, as it should be last
    add_back->next = NULL;

    if(listt == NULL)
    {
        return add_back;
    }
    //iterate until the last element in the list
    while(check->next != NULL)
    {
        check = check->next;
    }
    //connect the last element to the new list
    check->next = add_back;
    return listt;
}

//print all elements in the list
void print(struct list* listt)
{
    struct list *i;
    
    //iterate through the list as long as it is not null
    //print each element's value
    for(i = listt; i; i = i->next)
    {
        printf("%d ", i->info);
    }
    printf("\n");
}

//delete the first element in the list
struct list *delete(struct list* listt)
{
    if(listt == NULL)
    {
        return listt;
    }
    else
    {
        struct list *rem;
        //store a copy of the list without the first element
        rem = listt->next;
        //free the memory
        free(listt);  
        return rem;
    }
}

//iterate through all elements and free the memory allocated for them
void deallocate(struct list* listt)
{
    struct list *next_element;
    while(listt != NULL)
    {
        //store a copy of the list without its first element
        next_element = listt->next;
        //free the memory
        free(listt);
        listt = next_element;
    }
}
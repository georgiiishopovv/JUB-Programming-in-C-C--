/*
CH-230-A
a6_p1.[c]
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

void print(struct list *my_list)
{
    struct list* i;
    for(i = my_list; i; i = i->next)
    {
        printf("%c ", i->info);
    }
    printf("\n");
}

struct list *add_front(struct list *my_list, char a)
{
    struct list *element_front;
    element_front = (struct list*) malloc(sizeof(struct list));
    if(element_front == NULL)
    {
        printf("Error allocating memory!\n");  
        return my_list;       
    }
    element_front->info = a;
    element_front->next = my_list;
    element_front->prev = NULL;
    if(my_list == NULL)
    {
        return element_front;
    }

    my_list->prev = element_front;
    return element_front;
}

struct list *remove_character(struct list *my_list, char a)
{
    struct list *copy2;
    copy2 = my_list;
    struct list *prev_char;
    if(my_list == NULL)
    {
        return my_list;
    }
    while(copy2 != NULL)
    {
        if(copy2->info == a)
        {
            if(copy2->next == NULL)
            {
                prev_char = copy2->prev;
                prev_char->next == NULL;
                free(copy2);
            }
            else if(copy2->prev == NULL)
            {
                prev_char = copy2->next;
                prev_char->prev = NULL;
                free(copy2);
            }
            else
            {
                prev_char = copy2->prev;
                prev_char->next = copy2->next;
                copy2->next->prev = prev_char;
                free(copy2);
            }
        }
        copy2 = copy2->next; 
    }
    return my_list;
}

int main()
{
    struct list *my_list = NULL;
    char a;
    int num;
    
    while(1)
    {   
        scanf("%d", &num);
        getchar();
        switch(num)
        {
            case 1:
                scanf("%c", &a);
                getchar();
                my_list = add_front(my_list, a);
                break;
            case 2:
                scanf("%c", &a);
                getchar();
                my_list = remove_character(my_list, a);
                break;
            case 3:
                print(my_list);
                break;
        }
    }
}
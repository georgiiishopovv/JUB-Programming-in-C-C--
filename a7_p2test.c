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
    my_list = element_front;
    return my_list;
}

struct list *remove_character(struct list* my_list, char a)
{
    struct list *copy;
    copy = my_list;
    struct list *delete;
    delete = copy;
    if(my_list == NULL)
    {
        return my_list;
    }
    if(copy->info == a)
    {
        copy = copy->next;
    }
    if(copy->next != NULL)
    {
        copy->next->prev = copy->prev;
    }
    if(copy->prev != NULL)
    {
        copy->prev->next = copy->next;
    }
    free(delete);
}


struct list *remove_character(struct list *my_list, char a)
{
    struct list *copy2;
    copy2 = my_list;
    struct list *delete_char;
    if(my_list == NULL)
    {
        return my_list;
    }
    while(copy2 != NULL)
    {
        if(copy2->info == a)
        {   
            delete_char = copy2;
            if(copy2->next == NULL && copy2->prev == NULL)
            {
                free(delete_char);
                my_list = NULL;
                return my_list;
            }
            else if(copy2->prev == NULL)
            {
                copy2 = copy2->next;
                copy2->prev = NULL;
                free(delete_char);
            }
            else if(copy2->next != NULL)
            {
                copy2->prev->next = copy2->next;
                copy2->next->prev = copy2->prev;
                copy2 = copy2->next;
                free(delete_char);
            }
            else if(copy2->next == NULL)
            {
                copy2->prev->next = NULL;
                copy2 = copy2->next;
                free(delete_char);
            }
            else
            {
                copy2 = copy2->next;
            }
        }
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
            default:
                return 0;
        }
    }
}
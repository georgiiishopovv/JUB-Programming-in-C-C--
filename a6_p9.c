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
    int info;
    struct list *next;
};

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
    add_front->next = listt;  
    return add_front;  
}

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
    add_back->next = NULL;
    if(listt == NULL)
    {
        return add_back;
    }
    while(check->next != NULL)
    {
        check = check->next;
    }
    check->next = add_back;
    return listt;
}

void print(struct list* listt)
{
    struct list *i;
    for(i = listt; i; i = i->next)
    {
        printf("%d ", i->info);
    }
    printf("\n");
}

struct list* delete(struct list* listt)
{
    if(listt == NULL)
    {
        return 0;
    }
    struct list *rem;
    rem = listt;
    listt = listt->next;
    free(rem);  
    return listt;
}

void deallocate(struct list* listt)
{
    struct list *next_element;
    while(listt != NULL)
    {
        next_element = listt->next;
        free(listt);
        listt = next_element;
    }
}

struct list* position_add(struct list* listt, int position, int value)
{
    int size = 0;
    while(listt != NULL)
    {
        listt = listt->next;
        size++;
    }

    struct list* position_element = (struct list *) malloc(sizeof(struct list));
    if(position_element == NULL)
    {
        printf("Error allocating memory!\n");  
        return listt;                      
    }
    position_element->info = value;
    //position_element->next = NULL;
    if(listt == NULL){
        if(position != 0)
        {
            return listt;
        } 
        else
        {
            listt = position_element;
            return listt;
        }
    }
    else
    {
        if(position == 0)
        {
        //position_element->next = listt;
        //listt = position_element;
        return front(listt, value);
        }
    else if(position < 0 || position > size-1)
    {
        printf("Invalid position!\n");
        return listt;
    }
    else
    {
        struct list* check = listt;
        while(--position)
        {
            check = check->next;
        }
        position_element->next = check->next;
        check->next = position_element;
        return listt;
    }
    }
}

int main()
{
    struct list *listt = NULL;
    char a;
    int value;
    int position;
    while(1)
    {
        scanf("%c", &a); 
        getchar();
        switch(a)
        { 
            case 'b':
                scanf("%d", &value);
                getchar();
                listt = front(listt, value);
                break;
            case 'a':
                scanf("%d", &value);
                getchar();
                listt = back(listt, value);
                break;
            case 'r':
                listt = delete(listt);
                break;
            case 'p':
                print(listt);
                break;  
            case 'q':
                deallocate(listt);
                return 0;
            case 'i':
                scanf("%d", &position);
                getchar();
                scanf("%d", &value);
                getchar();
                listt = position_add(listt, position, value);
                break;
            default:
                return 0;
        }
    }
}

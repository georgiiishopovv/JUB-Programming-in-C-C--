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
    }
    add_front->info = value;
    add_front->next = listt;  
    return listt;  
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
    listt = add_back;
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
}

struct list* delete(struct list* listt)
{
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

int main()
{
    struct list *listt = NULL;
    char a;
    int value;
    while(1)
    {
        scanf("%c", &a); 
        switch(a)
        { 
            case 'a':
                scanf("%d", &value);
                listt = front(listt, value);
                break;
            case 'b':
                scanf("%d", &value);
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
            default:
                return 0;
        }
    }
}

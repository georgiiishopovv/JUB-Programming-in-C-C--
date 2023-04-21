/*
CH-230-A
a6_p8.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//create a struct with all of the fields required for a linked list
struct list
{
    int info;
    struct list *next;
};

//add an element to the front of the list
struct list* front(struct list* listt, int value)
{
    //allocate memory for a new list
    struct list *add_front;
    add_front = (struct list *) malloc(sizeof(struct list));
    //check if the allocation was valid
    if(add_front == NULL)
    {
        printf("Error allocating memory!\n");  
        return listt;                      
    }
    //add a value to the new element
    add_front->info = value;
    //link the new element to the remaining of the list
    add_front->next = listt;  
    //return the new list
    return add_front;  
}

//add an element to the back of the list
struct list* back(struct list* listt, int value)
{
    struct list *check, *add_back;
    //store a copy of the initial list
    check = listt;
    //allocate memory for a new list
    add_back = (struct list *) malloc(sizeof(struct list));
    //check if the allocation was correct
    if(add_back == NULL)
    {
        printf("Error allocating memory!\n");
        return listt;               
    }
    //add a value to the first element of the new list
    add_back->info = value;
    //make the element of the new list point to NULL, as it should be last
    add_back->next = NULL;
    //check if the initial list is empty
    //if it is return the new list with the one element
    if(listt == NULL)
    {
        return add_back;
    }
    //using the copy of the initial list
    //iterate until the last element in the list
    while(check->next != NULL)
    {
        check = check->next;
    }
    //connect the last element to the new list
    check->next = add_back;
    //return the list with the changes
    return listt;
}

//print all elements in the list
void print(struct list* listt)
{
    struct list *i;
    //store a copy of the initial list
    //iterate through the list as long as it is not null
    //print each element's value
    //move to the next element
    for(i = listt; i; i = i->next)
    {
        printf("%d ", i->info);
    }
    printf("\n");
}

//delete the first element in the list
struct list* remove(struct list* listt)
{
    //if the list is empty, there is nothing to remove
    if(listt == NULL)
    {
        return listt;
    }
    else
    {
        struct list *rem;
        //store a copy of the list without the first element
        rem = listt->next;
        //free the memory for the first element
        free(listt);  
        //return the list without the first element
        return rem;
    }
}

//iterate through all elements and free the memory allocated for them
void deallocate(struct list* listt)
{
    struct list *next_element;
    //iterate until the list is empty
    while(listt != NULL)
    {
        //store a copy of the list without its first element
        next_element = listt->next;
        //free the memory for each first element
        free(listt);
        //make the list equal to the copy without the first element
        listt = next_element;
    }
}

int main()
{
    //initialize the list as empty
    struct list *listt = NULL;
    char a;
    int value;
    //repeat until the user enters q
    while(1)
    {
        scanf("%c", &a); 
        getchar();
        //call the corresponding functions for each case
        switch(a)
        { 
            case 'b':
                scanf("%d", &value);
                getchar();
                //call the function to add an element to the beginning
                //make the list equal to the new one after changing it
                //through the function
                listt = front(listt, value);
                break;
            case 'a':
                scanf("%d", &value);
                getchar();
                //call the function to add an element to the back
                //make the list equal to the new one after changing it
                //through the function
                listt = back(listt, value);
                break;
            case 'r':
                //call the function to remove the first element
                //make the list equal to the new one after changing it
                //through the function
                listt = remove(listt);
                break;
            case 'p':
                //call the function to print the elements of the list
                print(listt);
                break;  
            case 'q':
                //call the function to deallocate the memory and quit
                deallocate(listt);
                return 0;
            default:
                //default case if the character is not in the set
                printf("Character not in set\n");
        }
    }
    return 0;
}

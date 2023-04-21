/*
CH-230-A
a6_p9.[c]
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
struct list* delete(struct list* listt)
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

//reverse the list
struct list* reverse(struct list* listt)
{
    struct list *next_elements = NULL;
    struct list *previous = NULL;
    struct list *copy;
    copy = listt;
    struct list* check;
    check = listt;
    //check if the list is empty
    if(check == NULL)
    {
        return listt;
    }
    else
    {
        while(copy != NULL)
        {
            //store the elements after the first element of the list in 
            //the next_elements list
            next_elements = copy->next;
            
            //make each element of the list to point to the previous 
            //elements, to reverse the connections
            copy->next = previous;
            
            //store the list with the reversed connections
            previous = copy;
            
            //omit the elements with the reversed connections
            copy =  next_elements;
        }
        //return the reversed list
        return previous;
    }
}

//add an element to a specific position
struct list* position_add(struct list* listt, int position, int value)
{
    struct list* listt_copy;
    int size = 0;
    listt_copy = listt;
    //determine the size of the list using a copy of it
    while(listt_copy != NULL)
    {
        listt_copy = listt_copy->next;
        size++;
    }
    //check whether the position is valid
    if(position < 0 || position > size)
    {
        printf("Invalid position!\n");
        return listt;
    }
    //if the position is 0, call the function that adds an element to the front
    else if(position == 0) 
    {
        listt = front(listt, value);
        return listt;
    }
    else
    {
        struct list* listt_copy1;
        listt_copy1 = listt;
        
        //use a copy of the list
        //move the copy of the list to the position where an element 
        //needs to be added
        while(--position)
        {
            listt_copy1 = listt_copy1->next;
        }
        //allocate memory for a new list that has only one element
        struct list* new_element = (struct list*) malloc(sizeof(struct list));
        //check if the allocation was correct
        if(new_element == NULL)
        {
            printf("Error allocating memory\n");
            return listt;
        }
        //add a value to the element of the new list
        new_element->info = value;

        //connect the new list to the element, which is at the position 
        //where the new element needs to be added
        //we also get the rest of the elements of the initial list
        new_element->next = listt_copy1->next;

        //connect the initial list to the list containing the new element
        //and the rest of the elements of the initial list
        listt_copy1->next = new_element;
        
        //return the changed list
        return listt;
    }
}

int main()
{
    //initialize the list as empty
    struct list *listt = NULL;
    char a;
    int value;
    int position;
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
                listt = delete(listt);
                break;
            case 'p':
                //call the function to print the elements of the list
                print(listt);
                break;  
            case 'i':
                scanf("%d %d", &position, &value);
                getchar();
                //call the function to add an element to a position
                //make the list equal to the new one after changing it
                //through the function
                listt = position_add(listt, position, value);
                break;
            case 'q':
                //call the function to deallocate the memory and quit
                deallocate(listt);
                return 0;
            case 'R':
                //call the function to reverse the list
                //make the list equal to the new one after changing it
                //through the function
                listt = reverse(listt);
                break;
            default:
                //default case if the character is not in the set
                printf("Character not in set\n");
                break;
        }
    }
    return 0;
}

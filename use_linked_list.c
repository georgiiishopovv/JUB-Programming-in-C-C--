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

int main()
{
    struct list *listt = NULL;
    char a;
    int value;
    //repeat until the user enters q
    while(1)
    {
        scanf("%c", &a); 
        getchar();
        switch(a)
        { 
            case 'b':
                scanf("%d", &value);
                getchar();
                //call the function to add an element to the beginning
                listt = front(listt, value);
                break;
            case 'a':
                scanf("%d", &value);
                getchar();
                //call the function to add an element to the back
                listt = back(listt, value);
                break;
            case 'r':
                //call the function to remove the first element
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
                printf("Character not in set\n");
                break;
        }
    }
    return 0;
}
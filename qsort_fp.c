/*
CH-230-A
a7_p5.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int ascending(const void *va , const void * vb) 
{
    const int *a = (const int *) va;
    const int *b = (const int *) vb;

    //compare the values and return the corresponding result
    if(*a < *b) 
    {
        return -1;
    }
    else if(*a > *b)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int descending(const void *va , const void *vb) 
{
    const int *a = (const int *) va ;
    const int *b = (const int *) vb ;
    
    //compare the values and return the corresponding result
    if(*a < *b) 
    {
        return 1;
    }
    else if(*a > *b)
    {
        return -1;
    }
    else 
    {
        return 0;
    }
}

//array of function pointers
int (*func_arr[2]) (const void *va, const void *vb) = {ascending, descending};

int main()
{
    int n;
    char command;
    scanf("%d", &n);
    int arr[n];

    //populate the array
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {
        scanf(" %c", &command);
        getchar();
        
        //call the corresponding functions using function pointers  
        switch(command)
        {
            case 'a':
                //ascending sorting using qsort
                qsort(arr, n, sizeof(arr[0]), (*func_arr[0]));
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 'd':
                //descending sorting using qsort
                qsort(arr, n, sizeof(arr[0]), (*func_arr[1]));
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 'e':
                exit(1);
                break;
            default:
                break;   
        }
    }
    return 0;
}
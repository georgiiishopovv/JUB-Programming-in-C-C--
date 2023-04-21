/*
CH-230-A
a7_p6.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

typedef enum {true, false} bool;

int sort_by_age(struct person first, struct person second)
{
	//if the ages are different, return their difference
    //else, return the comparison of the corresponding names
    if(first.age - second.age == 0)
    {
        return strcmp(first.name, second.name);
    }
    else
    {
        return first.age - second.age;
    }
}

int sort_by_name(struct person first, struct person second)
{
    //if the names are different, return the result of their comparison
    //else, return the difference of their ages
    if(strcmp(first.name, second.name) == 0)
    {
        return first.age - second.age;
    }
    else
    {
        return strcmp(first.name, second.name);
    }
}

//implement the bubblesort algorithm using the results of the pointed functions
void bubblesort(struct person records[], int num, 
int (*sort) (struct person first, struct person second))
{
    bool swapped =  true;
    struct person temporary;

    while(swapped == true)
    {
        swapped = false;
        for(int i = 1; i < num; i++)
        {
            if(sort(records[i-1], records[i]) > 0)
            {
                temporary = records[i-1];
                records[i-1] = records[i];
                records[i] = temporary;
                swapped = true;
            }
        }
    }
}


int main()
{
    int num;
    scanf("%d", &num);
    
    struct person records[num];

    //read the array of data corresponding to the people
    for(int i = 0; i < num; i++)
    {
        scanf("%s", records[i].name);
        scanf("%d", &records[i].age);
    }

    //call the bubblesort function and send the address of the function
    //that sorts the data by name
    bubblesort(records, num, &sort_by_name);
    for(int i = 0; i < num; i++)
    {
        printf("{%s, %d} ", records[i].name, records[i].age);
    }
    printf("\n");

    //call the bubblesort function and send the address of the function
    //that sorts the data by age
    bubblesort(records, num, &sort_by_age);
    for(int i = 0; i < num; i++)
    {
        printf("{%s, %d} ", records[i].name, records[i].age);
    }
    printf("\n");

    return 0;
}
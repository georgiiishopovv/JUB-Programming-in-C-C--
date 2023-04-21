#include <stdio.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

void sort_by_age(struct person records[], int num)
{
    struct person temporary;
    for(int i = 0; i < num - 1; i++)
    {
        for(int j = 0; j < num - i - 1; j++)
        {
            if(records[j].age > records[j+1].age)
            {
                temporary = records[j];
                records[j] = records[j+1];
                records[j+1] = temporary;
            }
            else if(records[j].age == records[j+1].age)
            {
                if(strcmp(records[j].name, records[j+1].name) > 0)
                {
                    temporary = records[j];
                    records[j] = records[j+1];
                    records[j+1] = temporary;
                }
            }
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    
    struct person records[num];

    for(int i = 0; i < num; i++)
    {
        scanf("%s", records[i].name);
        scanf("%d", &records[i].age);
    }

    sort_by_age(records, num);
    for(int i = 0; i < num; i++)
    {
        printf("{%s, %d} ", records[i].name, records[i].age);
    }
}
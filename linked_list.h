/*
CH-230-A
a7_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

//declarations
struct list
{
    int info;
    struct list *next;
};

struct list* front(struct list* listt, int value);
struct list* back(struct list* listt, int value);
void print(struct list* listt);
struct list *remove(struct list* listt);
void deallocate(struct list* listt);

/*
CH-230-A
a8_p4.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

struct stack
{
    unsigned int count;
    int array[12];
};

void converting(struct stack *a, unsigned int num);
void push(struct stack *a, unsigned int num);
/*
void pop(struct stack *a, int (*fct) (struct stack *a));
void empty(struct stack *a, int (*fct) (struct stack *a));
int isEmpty(struct stack *a);
*/
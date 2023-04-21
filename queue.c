/*
CH-230-A
a8_p3.[c]
Georgi Shopov
gshopov@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    //allocate memory for a new node
    Node* new_node;
    new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        printf("Error allocating memory!");
        exit(1);
    }
    new_node->item = item;
    new_node->next = NULL;
    
    //set the front and the rear depending on the state of the queue
    if(queue_is_empty(pq))
    {
        pq->front = new_node;
    }
    else
    {
        pq->rear->next = new_node;
    }
    pq->rear = new_node;
    pq->items = pq->items + 1;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if(queue_is_empty(pq))
    {
        return 0;
    }
    else
    {
        //use a temporary node to free the memory of the dequeued element
        Node *waiting;
        waiting = pq->front;

        *pitem = pq->front->item;

        //reset the front pointer
        pq->front = pq->front->next;
        free(waiting);
        pq->items = pq->items - 1;  

        //reset rear pointer if last item is removed
        if(pq->items == 0)
        {
            pq->front = pq->rear = NULL;
        }
    }
    return 0;
}

void printq(Queue *pq)
{
    //iterate through the whole queue using a temporary node pointer
    Node *temp;
    for(temp = pq->front; temp; temp = temp->next)
    {
        printf("%d ", temp->item);
    }
    printf("\n");
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

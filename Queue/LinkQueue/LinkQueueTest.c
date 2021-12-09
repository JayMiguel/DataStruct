#include "LinkQueueFunc.h"
#include <stdio.h>

void printQueue(LinkQueue *Q)
{
    QueuePtr p = Q->front;
    printf("Queue: [ ");
    while (p != Q->rear)
    {
        p = p->next;
        printf("%d ", p->data);
    }
    printf("]");
}

int main()
{
    LinkQueue Q;
    InitQueue(&Q);

    EnQueue(&Q, 10);
    EnQueue(&Q, 20);
    printf("EnQueue: ");
    printQueue(&Q);
    printf(" QueueLength: %d\n", QueueLength(&Q));

    QElemType e;
    DeQueue(&Q, &e);
    printf("Dequeue: e = %d ", e);
    printQueue(&Q);
    printf(" QueueLength: %d\n", QueueLength(&Q));

    DeQueue(&Q, &e);
    printf("Dequeue: e = %d ", e);
    printQueue(&Q);
    printf(" QueueLength: %d\n", QueueLength(&Q));

    return 0;
}
#include "SqQueueFunc.h"
#include <stdio.h>

void printQueue(const SqQueue *Q)
{
    int pos = Q->front;
    while (pos != Q->rear)
    {
        printf("%d ", Q->data[pos]);
        pos = (pos + 1) % MAXSIZE;
    }
}

int main()
{
    SqQueue Q;
    InitQueue(&Q);

    EnQueue(&Q, 10);
    EnQueue(&Q, 20);
    EnQueue(&Q, 30);
    printf("EnQueue: ");
    printQueue(&Q);

    QElemType e;
    DeQueue(&Q, &e);
    printf("DeQueue: e = %d ", e);
    printQueue(&Q);

    return 0;
}
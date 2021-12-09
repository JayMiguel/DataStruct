#include "LinkQueueFunc.h"
#include <stdlib.h>

/**
 * @brief 初始化一个空队列
 */
Status InitQueue(LinkQueue *Q)
{
    QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
    if (!s)
        exit(0);

    s->next = NULL;
    Q->front = s;
    Q->rear = s;
    return OK;
}

/**
 * @brief 返回队列的长度
 */
int QueueLength(LinkQueue *Q)
{
    QueuePtr p = Q->front;

    int count = 0;
    while (p != Q->rear)
    {
        p = p->next;
        count++;
    }
    return count;
}

/**
 * @brief 向队列尾部添加元素
 */
Status EnQueue(LinkQueue *Q, QElemType e)
{
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    if (!p)
        return ERROR;

    p->data = e;
    p->next = NULL;
    Q->rear->next = p;
    Q->rear = p;
    return OK;
}

/**
 * @brief 返回并删除队列头部的元素
 */
Status DeQueue(LinkQueue *Q, QElemType *e)
{
    if (Q->rear == Q->front)
        return ERROR;

    QueuePtr p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;

    if (Q->rear == p)
        Q->rear = Q->front;

    free(p);
    return OK;
}
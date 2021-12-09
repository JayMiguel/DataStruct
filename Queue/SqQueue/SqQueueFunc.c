#include "SqQueueFunc.h"

/**
 * @brief 初始化一个空队列
 */
Status InitQueue(SqQueue *Q)
{
    Q->front = 0;
    Q->rear = 0;
    return OK;
}

/**
 * @brief 返回队列的长度
 */
int QueueLength(const SqQueue *Q)
{
    return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
}

/**
 * @brief 添加新元素到队列的尾部
 */
Status EnQueue(SqQueue *Q, QElemType e)
{
    if ((Q->rear + 1) % MAXSIZE == Q->front)
        return ERROR;

    Q->data[Q->rear] = e;
    Q->rear = (Q->rear + 1) % MAXSIZE;
    return OK;
}

/**
 * @brief 让队列头部的元素出队并返回
 */
Status DeQueue(SqQueue *Q, QElemType *e)
{
    if (Q->front == Q->rear)
        return ERROR;

    *e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MAXSIZE;

    return OK;
}
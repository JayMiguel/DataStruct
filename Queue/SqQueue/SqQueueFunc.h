#include "SqQueue.h"
#define OK 1
#define ERROR 0
typedef int Status;

/**
 * @brief 初始化一个空队列
 */
Status InitQueue(SqQueue *Q);

/**
 * @brief 返回队列的长度
 */
int QueueLength(const SqQueue *Q);

/**
 * @brief 添加新元素到队列的尾部
 */
Status EnQueue(SqQueue *Q, QElemType e);

/**
 * @brief 让队列头部的元素出队并返回
 */
Status DeQueue(SqQueue *Q, QElemType *e);
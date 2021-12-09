#include "LinkQueue.h"
#define OK 1
#define ERROR 0
typedef int Status;

/**
 * @brief 初始化一个空队列
 */
Status InitQueue(LinkQueue *Q);

/**
 * @brief 返回队列的长度
 */
int QueueLength(LinkQueue *Q);

/**
 * @brief 向队列尾部添加元素
 */
Status EnQueue(LinkQueue *Q, QElemType e);

/**
 * @brief 返回并删除队列头部的元素
 */
Status DeQueue(LinkQueue *Q, QElemType *e);
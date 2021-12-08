#include "StaticLinkList.h"
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;

/**
 * @brief 初始化一个静态链表
 */
Status InitList(StaticLinkList space);

/**
 * @brief 返回可用空间的下标
 */
int Malloc_SLL(StaticLinkList space);

/**
 * @brief 释放目标空间
 */
void free_SSL(StaticLinkList space, int i);

/**
 * @brief 在space的第i个元素前插入新元素e
 */
Status ListInsert(StaticLinkList space, int i, ElemType e);

/**
 * @brief 删除space的第i个元素
 */
Status ListDelete(StaticLinkList space, int i);
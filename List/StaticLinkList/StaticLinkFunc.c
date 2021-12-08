#include "StaticLinkFunc.h"

/**
 * @brief 初始化一个静态链表
 */
Status InitList(StaticLinkList space)
{
    for (int i = 0; i < MAXSIZE - 1; i++)
    {
        space[i].cur = i + 1;
    }
    space[MAXSIZE - 1].cur = 0;
    return OK;
}

/**
 * @brief 返回静态链表现有的元素个数
 */
int ListLength(StaticLinkList space)
{
    int j = 0;
    int i = space[MAXSIZE - 1].cur;
    while (i)
    {
        i = space[i].cur;
        j++;
    }
    return j;
}

/**
 * @brief 返回可用空间的下标
 */
int Malloc_SLL(StaticLinkList space)
{
    int i = space[0].cur;

    if (space[i].cur)
    {
        space[0].cur = space[i].cur;
    }

    return i;
}

/**
 * @brief 释放目标空间
 */
void free_SSL(StaticLinkList space, int i)
{
    space[i].cur = space[0].cur;
    space[0].cur = i;
}

/**
 * @brief 在space的第i个元素前插入新元素e
 */
Status ListInsert(StaticLinkList space, int i, ElemType e)
{
    if (i < 1 || i > ListLength(space) + 1)
        return ERROR;

    int index = Malloc_SLL(space);
    if (index)
    {
        space[index].data = e;

        int j = 1, k = MAXSIZE - 1;
        while (j <= i - 1)
        {
            k = space[k].cur;
            j++;
        }
        space[index].cur = space[k].cur;
        space[k].cur = index;
        return OK;
    }
    return ERROR;
}

/**
 * @brief 删除space的第i个元素
 */
Status ListDelete(StaticLinkList space, int i)
{
    if (i < 1 || i > ListLength(space))
        return ERROR;

    int j, k = MAXSIZE - 1;
    for (j = 1; j <= i - 1; j++)
    {
        k = space[k].cur;
    }
    j = space[k].cur;
    space[k].cur = space[j].cur;
    free_SSL(space, j);
}
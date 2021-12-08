#include "SqFunc.h"

/**
 * @brief 返回顺序线性表的实际长度
 * 初始条件：顺序线性表L已存在；
 * 操作结果：返回L的实际长度length。
 */
int ListLength(SqList L)
{
    return L.length;
}

/**
 * @brief 查询顺序线性表中指定位置的数据元素
 * 初始条件：顺序线性表L已存在， 1 <= i <= ListLength(L);
 * 操作结果：用e返回L中第i个数据元素的值。
 */
Status GetElem(SqList L, int i, ElemType *e)
{
    if (L.length == 0 || i < 1 || i > L.length)
        return ERROR;
    *e = L.data[i - 1];
    return OK;
}

/**
 * @brief 向指定位置插入新的数据元素
 * 初始条件：顺序线性表L已存在，1 <= i <= ListLength(L);
 * 操作结果：在L中的第i个位置插入新的数据元素e.
 */
Status ListInsert(SqList *L, int i, ElemType e)
{
    if (L->length == MAXSIZE)
        return ERROR;
    if (i < 1 || i > L->length + 1)
        return ERROR;
    if (i <= L->length)
    {
        int k = L->length - 1;
        while (k >= i - 1)
        {
            L->data[k + 1] = L->data[k];
            k--;
        }
    }
    L->data[i - 1] = e;
    L->length++;
    return OK;
}

/**
 * @brief 删除顺序线性表中指定位置的数据元素并返回
 * 初始条件：顺序线性表L已存在，且 1<= i <= ListLength(L);
 * 操作结果：用e返回L中第i个位置的数据元素并删除。
 */
Status ListDelete(SqList *L, int i, ElemType *e)
{
    if (L->length == 0)
        return ERROR;
    if (i < 1 || i > L->length)
        return ERROR;
    *e = L->data[i - 1];
    if (i < L->length)
    {
        for (int k = i; k < L->length; k++)
        {
            L->data[k - 1] = L->data[k];
        }
    }
    L->length--;
    return OK;
}
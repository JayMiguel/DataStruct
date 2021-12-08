#include "CircularLinkFunc.h"
#include <stdlib.h>

/**
 * @brief 初始化循环链表头结点
 */
void InitListHeader(CircularLinkList *L)
{
    *L = (CircularLinkList)malloc(sizeof(Node));
    (*L)->next = *L;
}

/**
 * @brief 返回循环链表长度
 */
int ListLength(const CircularLinkList L)
{
    int len = 0;

    CircularLinkList p = L->next, r = p->next;
    while (r != p)
    {
        len++;
        r = r->next;
    }
    return len;
}

/**
 * @brief 向循环链表的指定位置插入新元素
 */
Status ListInsert(CircularLinkList *L, int pos, ElemType e)
{
    if (pos < 1 || pos > ListLength(*L) + 1)
        return ERROR;

    CircularLinkList p = (*L)->next;
    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }

    CircularLinkList r = (CircularLinkList)malloc(sizeof(Node));
    r->data = e;
    r->next = p->next;
    p->next = r;

    if (pos == ListLength(*L))
        *L = r;
    return OK;
}

/**
 * @brief 返回并删除循环链表中指定位置的元素
 */
Status ListDelete(CircularLinkList *L, int pos, ElemType *e)
{
    if (pos < 1 || pos > ListLength(*L) || ListLength(*L) < 1)
        return ERROR;

    CircularLinkList p = *L;
    for (int i = 0; i < pos; i++)
    {
        p = p->next;
    }

    if (pos == ListLength(*L))
        *L = p;

    CircularLinkList q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return OK;
}

/**
 * @brief 返回循环链表的指定位置的元素
 */
Status GetElem(CircularLinkList L, int pos, ElemType *e)
{
    if (pos < 1 || pos > ListLength(L) || ListLength(L) < 1)
        return ERROR;

    CircularLinkList p = L->next;
    for (int i = 0; i < pos; i++)
    {
        p = p->next;
    }
    *e = p->data;

    return OK;
}

/**
 * @brief 清空循环链表
 */
Status ClearList(CircularLinkList *L)
{
    CircularLinkList p = (*L)->next, s = p->next;
    while (s != p)
    {
        p->next = s->next;
        free(s);
        s = p->next;
    }
    *L = s;
    return OK;
}
#include "LinkFunc.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * @brief 查询指定位置的元素
 * 初始条件：链表L存在，且1 <=  i <= ListLength(L);
 * 操作结果：用e返回链表L中第i个元素
 */
Status GetElem(LinkList L, int i, ElemType *e)
{
    LinkList p = L->next;

    int j = 1;

    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;

    *e = p->data;
    return OK;
}

/**
 * @brief 向链表的指定位置插入新的数据元素
 * 初始条件：链表L已存在，1 <= i <= ListLength(L);
 * 操作结果：向L的第i个位置插入e
 */
Status ListInsert(LinkList L, int i, ElemType e)
{
    int j = 1;

    LinkList p = L->next;

    while (p && j < i - 1)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;

    LinkList s = (LinkList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

/**
 * @brief 把链表的指定位置的数据元素删除
 * 初始条件：链表L已存在，1 <= i <= ListLength(L);
 * 操作结果：用e返回L的第i个数据元素并删除
 */
Status ListDelete(LinkList *L, int i, ElemType *e)
{
    int j = 1;

    LinkList p, q;

    p = *L;

    while (p->next && j < i)
    {
        p = p->next;
        ++j;
    }

    if (!p || j > i)
        return ERROR;

    q = p->next;
    p->next = q->next;

    *e = q->data;
    free(q);

    return OK;
}

/**
 * @brief 使用头插法随机生成包含多个数据元素的链表
 * 特点：每个新的数据元素结点都插入到链表的第一个位置。
 */
void CreateListHead(LinkList *L, int n)
{
    LinkList p;
    srand(time(0));

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

/**
 * @brief 使用尾插法随机生成包含多个数据元素的链表
 * 特点：每个新的数据元素都插入到链表的尾部。
 */
void CreateListTail(LinkList *L, int n)
{
    LinkList p, r;
    srand(time(0));

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;

    r = *L;
    for (int i = 0; i < n; i++)
    {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

/**
 * @brief 清空链表
 * 初始条件：链表L已存在
 * 操作结果：清空链表L
 */
Status clearList(LinkList *L)
{
    LinkList p, q;

    p = (*L)->next;

    while (p->next)
    {
        q = p->next;
        free(p);
        p = q;
    }

    (*L)->next = NULL;
    return OK;
}
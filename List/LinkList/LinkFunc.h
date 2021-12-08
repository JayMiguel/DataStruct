#ifndef STATUS
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#endif
#include "LinkList.h"

/**
 * @brief 查询指定位置的元素
 * 初始条件：链表L存在，且1 <=  i <= ListLength(L);
 * 操作结果：用e返回链表L中第i个元素
 */
Status GetElem(LinkList L, int i, ElemType *e);

/**
 * @brief 向链表的指定位置插入新的数据元素
 * 初始条件：链表L已存在，1 <= i <= ListLength(L);
 * 操作结果：向L的第i个位置插入e
 */
Status ListInsert(LinkList L, int i, ElemType e);

/**
 * @brief 把链表的指定位置的数据元素删除
 * 初始条件：链表L已存在，1 <= i <= ListLength(L);
 * 操作结果：用e返回L的第i个数据元素并删除
 */
Status ListDelete(LinkList *L, int i, ElemType *e);

/**
 * @brief 使用头插法随机生成包含多个数据元素的链表
 * 特点：每个新的数据元素结点都插入到链表的第一个位置。
 */
void CreateListHead(LinkList *L, int n);

/**
 * @brief 使用尾插法随机生成包含多个数据元素的链表
 * 特点：每个新的数据元素都插入到链表的尾部。
 */
void CreateListTail(LinkList *L, int n);

/**
 * @brief 清空链表
 * 初始条件：链表L已存在
 * 操作结果：清空链表L
 */
Status clearList(LinkList *L);
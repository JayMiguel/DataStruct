#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#include "CircularLinkList.h"

/**
 * @brief 初始化循环链表头结点
 */
void InitListHeader(CircularLinkList *L);

/**
 * @brief 返回循环链表长度
 */
int ListLength(const CircularLinkList L);

/**
 * @brief 向循环链表的指定位置插入新元素
 */
Status ListInsert(CircularLinkList *L, int pos, ElemType e);

/**
 * @brief 返回并删除循环链表中指定位置的元素
 */
Status ListDelete(CircularLinkList *L, int pos, ElemType *e);

/**
 * @brief 返回循环链表的指定位置的元素
 */
Status GetElem(CircularLinkList L, int pos, ElemType *e);

/**
 * @brief 清空循环链表
 */
Status ClearList(CircularLinkList *L);
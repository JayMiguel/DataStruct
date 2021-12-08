/**
 * @brief Status是函数的返回值类型，其值是函数的执行状态代码，如：OK等。
 *
 */
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#include "SqList.h"

/**
 * @brief 返回顺序线性表的实际长度
 * 初始条件：顺序线性表L已存在；
 * 操作结果：返回L的实际长度length。
 */
int ListLength(SqList L);

/**
 * @brief 查询顺序线性表中指定位置的数据元素
 * 初始条件：顺序线性表L已存在， 1 <= i <= ListLength(L);
 * 操作结果：用e返回L中第i个数据元素的值。
 */
Status GetElem(SqList L, int i, ElemType *e);

/**
 * @brief 向指定位置插入新的数据元素
 * 初始条件：顺序线性表L已存在，1 <= i <= ListLength(L);
 * 操作结果：在L中的第i个位置插入新的数据元素e.
 */
Status ListInsert(SqList *L, int i, ElemType e);

/**
 * @brief 删除顺序线性表中指定位置的数据元素并返回
 * 初始条件：顺序线性表L已存在，且 1<= i <= ListLength(L);
 * 操作结果：用e返回L中第i个位置的数据元素并删除。
 */
Status ListDelete(SqList *L, int i, ElemType *e);
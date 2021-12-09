#include "SqSFunc.h"

/**
 * @brief 初始化栈
 */
void InitStack(SqStack *S)
{
    S->top = -1;
}

/**
 * @brief 向栈顶添加元素
 */
Status push(SqStack *S, SElemType e)
{
    if (S->top >= MAXSIZE - 1)
        return ERROR;

    S->top++;
    S->data[S->top] = e;
    return OK;
}

/**
 * @brief 返回并删除栈顶的元素
 */
Status pop(SqStack *S, SElemType *e)
{
    if (S->top == -1)
        return ERROR;

    *e = S->data[S->top];
    S->top--;
    return OK;
}
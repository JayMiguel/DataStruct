#include "SqDoubleFunc.h"

/**
 * @brief 初始化共享栈
 */
void InitStack(SqDoubleStack *S)
{
    S->top1 = -1;
    S->top2 = MAXSIZE;
}

/**
 * @brief 向指定的栈的栈顶添加元素
 */
Status push(SqDoubleStack *S, SElemType e, int stackNumber)
{
    if (S->top1 + 1 == S->top2)
        return ERROR;

    if (stackNumber == 1)
    {
        S->top1++;
        S->data[S->top1] = e;
    }
    else if (stackNumber == 2)
    {
        S->top2--;
        S->data[S->top2] = e;
    }
    return OK;
}

/**
 * @brief 返回并删除指定的栈的栈顶的元素
 */
Status pop(SqDoubleStack *S, SElemType *e, int stackNumber)
{
    if (stackNumber == 1 && S->top1 != -1)
    {
        *e = S->data[S->top1];
        S->top1--;
        return OK;
    }
    else if (stackNumber == 2 && S->top2 != MAXSIZE)
    {
        *e = S->data[S->top2];
        S->top2++;
        return OK;
    }
    return ERROR;
}
#include "LinkStackFunc.h"
#include <stdlib.h>

/**
 * @brief 初始化一个空链栈
 */
void InitStack(LinkStack **S)
{
    *S = (LinkStack *)malloc(sizeof(LinkStack));
    (*S)->top = NULL;
    (*S)->count = 0;
}

/**
 * @brief 向链栈的栈顶添加元素
 */
Status push(LinkStack *S, SElemType e)
{
    LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
    p->data = e;
    p->next = S->top;
    S->top = p;
    S->count++;
    return OK;
}

/**
 * @brief 返回并删除链栈的栈顶元素
 */
Status pop(LinkStack *S, SElemType *e)
{
    if (S->top == NULL)
        return ERROR;

    LinkStackPtr p = S->top;
    *e = p->data;
    S->top = S->top->next;
    S->count--;
    return OK;
}
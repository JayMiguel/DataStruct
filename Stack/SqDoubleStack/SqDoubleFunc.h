#include "SqDoubleStack.h"
#define OK 1
#define ERROR 0
typedef int Status;

/**
 * @brief 初始化共享栈
 */
void InitStack(SqDoubleStack *S);

/**
 * @brief 向指定的栈的栈顶添加元素
 */
Status push(SqDoubleStack *S, SElemType e, int stackNumber);

/**
 * @brief 返回并删除指定的栈的栈顶的元素
 */
Status pop(SqDoubleStack *S, SElemType *e, int stackNumber);
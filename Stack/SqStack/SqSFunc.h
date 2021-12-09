#include "SqStack.h"
#define OK 1
#define ERROR 0
typedef int Status;

/**
 * @brief 初始化栈
 */
void InitStack(SqStack *S);

/**
 * @brief 向栈顶添加元素
 */
Status push(SqStack *S, SElemType e);

/**
 * @brief 返回并删除栈顶的元素
 */
Status pop(SqStack *S, SElemType *e);
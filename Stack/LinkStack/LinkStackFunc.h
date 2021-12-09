#include "LinkStack.h"
#define OK 1
#define ERROR 0
typedef int Status;

/**
 * @brief 初始化一个空链栈
 */
void InitStack(LinkStack **S);

/**
 * @brief 向链栈的栈顶添加元素
 */
Status push(LinkStack *S, SElemType e);

/**
 * @brief 返回并删除链栈的栈顶元素
 */
Status pop(LinkStack *S, SElemType *e);
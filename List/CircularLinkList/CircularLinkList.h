/**
 * @brief 单循环链表
 */
typedef int ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *next;
} Node, *CircularLinkList;

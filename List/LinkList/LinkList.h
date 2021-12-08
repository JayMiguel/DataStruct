/**
 * @brief 线性表的链式存储结构
 * 存在一个数据域data用于保存数据元素；
 * 存在一个指针域next指向下一个结点。
 */
typedef int ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *next;
} Node;
typedef struct Node *LinkList; // 定义LinkList为Node类型指针的别名

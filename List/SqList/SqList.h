/**
 * @brief 线性表的顺序存储结构
 * 底层是数组，内部维护一个实际长度变量
 *
 */
#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
} SqList;

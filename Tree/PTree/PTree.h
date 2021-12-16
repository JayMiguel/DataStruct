/**
 * @brief 树结构：双亲表示法
 * 用数组存储每个结点
 * 结点中存储了它的父结点、长子结点和右兄弟结点的下标
 */
#define MAXSIZE 100
typedef char PElemType;
typedef struct PTNode
{
    PElemType data;
    int parent;     // 父结点的下标
    int firstChild; // 长子结点的下标
    int rightsib;   // 右兄弟结点的下标
} PTNode;
typedef struct
{
    PTNode nodes[MAXSIZE]; // 结点数组
    int r, n;              // 根结点的下标，结点的总数
} PTree;
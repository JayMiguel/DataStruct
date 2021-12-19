/**
 * @brief 无向图的链式存储结构，其特点如下：
 * 1.用一维数组存储顶点
 * 2.用链表存储邻接点
 * 3.每个顶点对应一个链表
 * 4.链表的结点值是该顶点的邻接点在一维数组中的位置
 */
#define MAXVEX 100
typedef char VexType;
typedef int EdgeType;
typedef struct EdgeNode
{
    int adjvex;
    struct EdgeNode *next;
} EdgeNode;

typedef struct VexNode
{
    VexType data;
    EdgeNode *firstEdge;
} VexNode, AdjList[MAXVEX];

typedef struct
{
    AdjList adjList;
    int numVertexes, numEdge;
} GraphAdjList;
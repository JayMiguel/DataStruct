/**
 * @brief 无向图的顺序存储结构，其特点如下：
 * 1.用一维数组存储顶点
 * 2.用二维数组存储边
 * 3.二维数组形成的矩阵为对称矩阵
 */
#define MAXVEX 100
#define INFINTY 65535
typedef char VertexType;
typedef int EdgeType;
typedef struct
{
    VertexType vexs[MAXVEX];
    EdgeType arc[MAXVEX][MAXVEX];
    int numVertexes, numEdge;
} MGraph;
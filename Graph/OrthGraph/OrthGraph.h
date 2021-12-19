#define MAXSIZE 100
typedef char VexType;
typedef int EdgeType;

typedef struct
{
    EdgeType tailVex;
    EdgeType headVex;
    EdgeNode *headlink;
    EdgeNode *taillink;
} EdgeNode, Edge[MAXSIZE];

typedef struct
{
    VexType data;
    EdgeNode *firstIn;
    EdgeNode *firstOut;
} VexNode, Vertexes[MAXSIZE];

typedef struct
{
    Vertexes vertex;
    Edge edge;
    int numVertex, numEdge;
} OrthGraph;
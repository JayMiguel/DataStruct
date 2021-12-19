#include "MGraphFunc.h"
#include <stdio.h>

void CreateGraph(MGraph *G)
{
    int i, j, k, w;
    printf("请输入顶点数和边数: ");
    scanf("%d,%d", &G->numVertexes, &G->numEdge);
    getchar();
    printf("请输入顶点值:");
    for (i = 0; i < G->numVertexes; i++)
    {
        scanf("%c", &G->vexs[i]);
    }
    getchar();

    printf("正在初始化邻接矩阵.....\n");
    for (i = 0; i < G->numVertexes; i++)
        for (j = 0; j < G->numVertexes; j++)
            G->arc[i][j] = INFINTY;

    for (k = 0; k < G->numEdge; k++)
    {
        printf("请输入边(vi,vj)的下标i,下标j: ");
        scanf("%d,%d", &i, &j);
        getchar();
        G->arc[i][j] = 1;
        G->arc[j][i] = G->arc[i][j];
    }
}

typedef int Boolean;
Boolean visited[MAXVEX];

void DFS(MGraph *G, int i)
{
    int j;
    visited[i] = TRUE;
    printf("%c ", G->vexs[i]);
    for (j = 0; j < G->numVertexes; j++)
    {
        if (G->arc[i][j] == 1 && !visited[j])
        {
            DFS(G, j);
        }
    }
}

void DFSTraverse(MGraph *G)
{
    int i;
    for (i = 0; i < G->numVertexes; i++)
        visited[i] = FALSE;

    for (i = 0; i < G->numVertexes; i++)
    {
        if (!visited[i])
        {
            DFS(G, i);
        }
    }
}
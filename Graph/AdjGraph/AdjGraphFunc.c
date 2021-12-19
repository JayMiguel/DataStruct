#include "AdjGraphFunc.h"
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1;
#define FALSE 0;

void CreateALGraph(GraphAdjList *G)
{
    int i, j, k;

    EdgeNode *e;

    printf("请输入顶点数和边数: ");
    scanf("%d,%d", &G->numVertexes, &G->numEdge);
    getchar();

    printf("请输入顶点值: ");
    for (i = 0; i < G->numVertexes; i++)
    {
        scanf("%c", &G->adjList[i].data);
        G->adjList[i].firstEdge = NULL;
    }
    getchar();

    for (k = 0; k < G->numEdge; k++)
    {
        printf("请输入边(vi,vj)的下标i和下标j: ");
        scanf("%d,%d", &i, &j);
        getchar();
        e = (EdgeNode *)malloc(sizeof(EdgeNode));
        e->adjvex = j;
        e->next = G->adjList[i].firstEdge;
        G->adjList[i].firstEdge = e;

        e = (EdgeNode *)malloc(sizeof(EdgeNode));
        e->adjvex = i;
        e->next = G->adjList[j].firstEdge;
        G->adjList[j].firstEdge = e;
    }
}

typedef int Boolean;
Boolean visited[MAXVEX];

void DFS(GraphAdjList *G, int i)
{
    visited[i] = TRUE;
    printf("%c ", G->adjList[i].data);
    EdgeNode *p = G->adjList[i].firstEdge;
    while (p)
    {
        if (!visited[p->adjvex])
            DFS(G, p->adjvex);

        p = p->next;
    }
}

void DFSTraverse(GraphAdjList *G)
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
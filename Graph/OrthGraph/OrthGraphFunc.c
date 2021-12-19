#include "OrthGraphFunc.h"
#include <stdio.h>
void CreateOrthGraph(OrthGraph *G)
{
    int i, j, k, l;
    printf("请输入图的顶点数和边数: ");
    scanf("%d,%d", &G->numVertex, &G->numEdge);

    printf("请输入顶点值: ");
    for (i = 0; i < G->numVertex; i++)
    {
        scanf("%c", &G->vertex[i].data);
        G->vertex[i].firstIn = NULL;
        G->vertex[i].firstOut = NULL;
    }

    for (k = 0; k < G->numEdge; k++)
    {
        printf("请输入边(vi,vj)的下标i和j值: ");
        scanf("%d,%d", &i, &j);
        G->edge[k].headVex = i;
        G->edge[k].tailVex = j;
        G->edge[k].headlink = NULL;
        G->edge[k].taillink = NULL;
    }

    for (k = 0; k < G->numVertex; k++)
    {
        for (l = 0; l < G->numEdge; l++)
        {
            if (k == G->edge[l].tailVex)
            {
                EdgeNode *e = G->vertex[k].firstOut;
                while (e != NULL)
                {
                    e = e->taillink;
                }
                e = &G->edge[l];
            }
            if (k == G->edge[l].headVex)
            {
                EdgeNode *e = G->vertex[k].firstIn;
                while (e != NULL)
                {
                    e = e->headlink;
                }
                e = &G->edge[l];
            }
        }
    }
}
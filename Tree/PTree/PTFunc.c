#include "PTFunc.h"
#include <stdio.h>
#include <stdlib.h>
int CreatePTree(PTree *T, int parent)
{

    char value;
    printf("请输入结点值: ");
    value = getchar();
    getchar();
    int index = -1;
    if (value == '#')
    {
        return -1;
    }
    else
    {
        if (parent == -1)
        {
            T->r = 0;
            T->n = 0;
        }
        index = T->n;
        T->n++;

        T->nodes[index].data = value;
        T->nodes[index].parent = parent;

        printf("结点%c是否存在右兄弟结点(y.是, n.否): ", value);
        char haveRSib = getchar();
        getchar();
        if (haveRSib == 'y')
        {
            T->nodes[index].rightsib = CreatePTree(T, parent);
        }
        else
        {
            T->nodes[index].rightsib = -1;
        }

        printf("结点%c是否存在子结点(y.是, n.否): ", value);
        char haveChild = getchar();
        getchar();
        if (haveChild == 'y')
        {
            T->nodes[index].firstChild = CreatePTree(T, index);
        }
        else
        {
            T->nodes[index].firstChild = -1;
        }
    }
    return index;
}

void printPTree(PTree *T, int pos)
{
    PTNode p = T->nodes[pos];
    printf("%c ", p.data);
    if (p.firstChild != -1)
        printPTree(T, p.firstChild);
    if (p.rightsib != -1)
        printPTree(T, p.rightsib);
}
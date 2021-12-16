#include "BiThrFunc.h"

void CreateBiThrTree(BiThrTree *T)
{
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        *T = NULL;
    else
    {
        *T = (BiThrTree)malloc(sizeof(BiThrNode));
        (*T)->data = ch;
        (*T)->ltag = Link;
        (*T)->rtag = Link;
        CreateBiThrTree(&(*T)->lchild);
        CreateBiThrTree(&(*T)->rchild);
    }
}

BiThrTree pre;

void InThreading(BiThrTree p)
{
    if (p)
    {
        InThreading(p->lchild);
        if (!p->lchild)
        {
            p->ltag = Thread;
            p->lchild = pre;
        }
        if (pre && !pre->rchild)
        {
            pre->rtag = Thread;
            pre->rchild = p;
        }
        pre = p;
        InThreading(p->rchild);
    }
}

void InOrderTraverse_Thr(BiThrTree p)
{
    while (p)
    {
        while (p->ltag == Link)
            p = p->lchild;

        printf("%c ", p->data);
        while (p->rtag == Thread && p->rchild != NULL)
        {
            p = p->rchild;
            printf("%c ", p->data);
        }
        p = p->rchild;
    }
}
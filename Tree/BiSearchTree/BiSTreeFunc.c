#include "BiSTreeFunc.h"
#include <stdlib.h>

Status SearchBST(BiSTree node, BiSTree T, int key, BiSTree *p)
{
    if (!node)
    {
        *p = T;
        return FALSE;
    }
    else if (key == node->data)
    {
        *p = node;
        return TRUE;
    }
    else if (key < node->data)
    {
        return SearchBST(node->lchild, node, key, p);
    }
    else
    {
        return SearchBST(node->rchild, node, key, p);
    }
}

Status insertBST(BiSTree *T, int key)
{
    BiSTree p;
    if (!SearchBST(*T, T, key, &p))
    {
        BiSTree s = (BiSTree)malloc(sizeof(BiSNode));
        s->data = key;
        s->lchild = s->rchild = NULL;

        if (!p)
        {
            *T = s;
        }
        else if (key < p->data)
        {
            p->lchild = s;
        }
        else
        {
            p->rchild = s;
        }
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

Status Delete(BiSTree *p)
{
    BiSTree q;
    if ((*p)->lchild == NULL)
    {
        q = *p;
        *p = (*p)->rchild;
        free(q);
    }
    else if ((*p)->rchild == NULL)
    {
        q = *p;
        *p = (*p)->lchild;
        free(q);
    }
    else
    {
        q = *p;
        BiSTree s = (*p)->lchild;
        while (s->rchild)
        {
            q = s;
            s = s->rchild;
        }
        (*p)->data = s->data;
        if (q == *p)
        {
            q->lchild = s->lchild;
        }
        else
        {
            q->rchild = s->lchild;
        }
    }
}

Status DeleteBST(BiSTree *T, int key)
{
    if (!*T)
    {
        return FALSE;
    }
    else
    {
        if (key == (*T)->data)
        {
            return delete (T);
        }
        else if (key < (*T)->data)
        {
            return deleteBST((*T)->lchild, key);
        }
        else
        {
            return deleteBST((*T)->rchild, key);
        }
    }
}

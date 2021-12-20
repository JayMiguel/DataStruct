#include "BiTreeFunc.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 建立一棵二叉树
 */
void CreateBiTree(BiTree *T)
{
    TElemType ch;
    scanf(" %c", &ch);
    if (ch == '#')
        *T = NULL;
    else
    {
        *T = (BiTree)malloc(sizeof(BiTNode));
        if (!*T)
            exit(_OVERFLOW);

        (*T)->data = ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
}

/**
 * @brief 二叉树的前序遍历
 */
void PreOrderTraverse(BiTree T)
{
    if (T == NULL)
        return;

    printf("%c ", T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}

/**
 * @brief 二叉树的中序遍历
 */
void InOrderTraverse(BiTree T)
{
    if (T == NULL)
        return;

    InOrderTraverse(T->lchild);
    printf("%c ", T->data);
    InOrderTraverse(T->rchild);
}

/**
 * @brief 二叉树的后序遍历
 */
void PostOrderTraverse(BiTree T)
{
    if (T == NULL)
        return;

    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c ", T->data);
}
#include "BiTree.h"
#define OK 1
#define ERROR 0
typedef int Status;

/**
 * @brief 建立一棵二叉树
 */
void CreateBiTree(BiTree *T);

/**
 * @brief 二叉树的前序遍历
 */
void PreOrderTraverse(BiTree T);

/**
 * @brief 二叉树的中序遍历
 */
void InOrderTraverse(BiTree T);

/**
 * @brief 二叉树的后序遍历
 */
void PostOrderTraverse(BiTree T);
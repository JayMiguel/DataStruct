typedef struct AvlBiNode
{
    int data;
    int bf;
    struct AvlBiNode *lchild, *rchild;
} AvlBiNode, *AvlBiTree;
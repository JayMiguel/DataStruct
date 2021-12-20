#include "BiSTree.h"
#define TRUE 1
#define FALSE 0
typedef int Status;

Status SearchBST(BiSNode node, BiSTree T, int key, BiSNode *p);

Status InsertBST(BiSTree *T, int key);

Status Delete(BiSTree *T);

Status DeleteBST(BiSTree *T, int key);

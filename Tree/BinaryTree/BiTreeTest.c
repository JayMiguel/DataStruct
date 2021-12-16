#include "BiTreeFunc.h"
#include <stdio.h>

int main()
{
    BiTree T;

    CreateBiTree(&T);

    PreOrderTraverse(T);
    printf("\n");

    InOrderTraverse(T);
    printf("\n");

    PostOrderTraverse(T);
    printf("\n");

    return 0;
}
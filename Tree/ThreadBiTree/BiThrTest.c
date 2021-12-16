#include "BiThrFunc.h"

int main()
{
    BiThrTree T;

    printf("请按前序输入二叉树: ");
    CreateBiThrTree(&T);

    InThreading(T);

    printf("按中序输出二叉树: ");
    InOrderTraverse_Thr(T);
    return 0;
}
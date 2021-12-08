#include "StaticLinkFunc.h"
#include <stdio.h>

void printList(StaticLinkList space)
{

    int i = space[MAXSIZE - 1].cur;
    while (i)
    {
        printf("%d ", space[i].data);
        i = space[i].cur;
    }
}

int main()
{
    StaticLinkList space;

    InitList(space);
    printf("InitList: ");
    printList(space);
    printf("\n");

    ListInsert(space, 1, 1);
    ListInsert(space, 2, 2);
    ListInsert(space, 2, 3);
    printf("ListInsert: ");
    printList(space);
    printf("\n");

    ListDelete(space, 1);
    printf("ListDelete: ");
    printList(space);
    printf("\n");
    return 0;
}
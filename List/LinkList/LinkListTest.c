#include "LinkFunc.h"
#include <stdio.h>
#include <stdlib.h>

void printList(LinkList L, int size)
{
    LinkList p = L->next;
    printf("LinkList L = [");
    for (int i = 0; i < size; i++)
    {
        printf("%d", p->data);
        if (i != size - 1)
        {
            printf(", ");
        }
        p = p->next;
    }
    printf("]");
}
int main()
{
    LinkList L;
    int n = 10;

    printf("CreateListHead:\t");
    CreateListHead(&L, n);
    printList(L, n);
    printf("\n");

    printf("ListInsert:\t");
    ListInsert(L, 2, 100);
    printList(L, n + 1);
    printf("\n");

    int e;
    GetElem(L, 3, &e);
    printf("GetElem:\te = %d\n", e);

    ListDelete(&L, 3, &e);
    printf("ListDelete:\t");
    printList(L, n);
    printf("\te = %d\n", e);

    clearList(&L);
    printf("clearList:\t");
    printList(L, 0);
    printf("\n");

    system("pause");
    return 0;
}
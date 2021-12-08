#include "CircularLinkFunc.h"
#include <stdio.h>
void printList(CircularLinkList L, int endLine)
{
    CircularLinkList h = L->next;
    CircularLinkList p = h->next;
    printf("L = [ ");
    while (p != h)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("]");
    if (endLine)
        printf("\n");
}

int main()
{
    CircularLinkList L;

    InitListHeader(&L);
    printf("InitListHeader: len = %d\n", ListLength(L));

    ListInsert(&L, 1, 10);
    ListInsert(&L, 2, 20);
    printf("ListInsert: len = %d\t", ListLength(L));
    printList(L, TRUE);

    ElemType e;
    ListDelete(&L, 2, &e);
    printf("ListDelete: len = %d\te = %d\t", ListLength(L), e);
    printList(L, TRUE);

    GetElem(L, 1, &e);
    printf("GetElem: e = %d\n", e);

    ClearList(&L);
    printf("ClearList: len = %d\n", ListLength(L));
    return 0;
}
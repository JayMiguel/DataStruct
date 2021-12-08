#include "SqFunc.h"
#include <stdio.h>

int main()
{
    SqList L;
    L.length = 0;
    for (int i = 1; i < 10; i++)
    {
        ListInsert(&L, i, i);
    }
    printf("ListLength(L) = %d\n", ListLength(L));

    int e = 0;
    GetElem(L, 5, &e);
    printf("e = %d\n", e);

    ListDelete(&L, 3, &e);
    printf("SqList L = [ ");
    for (int i = 0; i < ListLength(L); i++)
    {
        printf("%d", L.data[i]);
        if (i != ListLength(L) - 1)
        {
            printf(", ");
        }
        else
        {
            printf(" ]\n");
        }
    }
    return 0;
}
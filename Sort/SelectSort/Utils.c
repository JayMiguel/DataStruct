#include "SqList.h"
#include <stdio.h>

void swap(SqList *L, int i, int j)
{
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}

void printSqList(SqList *L)
{
    for (int i = 0; i < L->length; i++)
    {
        printf("%d ", L->r[i]);
    }
    printf("\n");
}
#include "BubbleSort.h"

void BubbleSort0(SqList *L)
{
    for (int i = 0; i < L->length - 1; i++)
    {
        for (int j = i + 1; j < L->length; j++)
        {
            if (L->r[i] > L->r[j])
            {
                swap(L, i, j);
            }
        }
    }
}

void BubbleSort(SqList *L)
{
    for (int i = 0; i < L->length; i++)
    {
        for (int j = L->length - 2; j >= i; j--)
        {
            if (L->r[j] > L->r[j + 1])
            {
                swap(L, j, j + 1);
            }
        }
    }
}

void BubbleSort2(SqList *L)
{
    int flag = 1;
    for (int i = 0; i < L->length && flag; i++)
    {
        flag = 0;
        for (int j = L->length - 2; j >= i; j--)
        {
            if (L->r[j] > L->r[j + 1])
            {
                swap(L, j, j + 1);
                flag = 1;
            }
        }
    }
}
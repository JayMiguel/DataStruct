#include "SelectSort.h"

void SelectSort(SqList *L)
{
    int min;
    for (int i = 0; i < L->length - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < L->length; j++)
        {
            if (L->r[min] > L->r[j])
            {
                min = j;
            }
        }
        if (i != min)
        {
            swap(L, min, i);
        }
    }
}
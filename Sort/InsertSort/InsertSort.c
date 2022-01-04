#include "InsertSort.h"

void InsertSort(SqList *L)
{
    for (int i = 1; i < L->length; i++)
    {
        if (L->r[i] < L->r[i - 1])
        {
            int temp = L->r[i];
            int j;
            for (j = i - 1; L->r[j] > temp; j--)
            {
                L->r[j + 1] = L->r[j];
            }
            L->r[j + 1] = temp;
        }
    }
}
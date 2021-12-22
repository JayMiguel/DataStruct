#include "AvlBiTreeFunc.h"

int main()
{
    // int a[10] = {3, 2, 1, 4, 5, 6, 7, 10, 9, 8};
    int a[6] = {10, 5, 16, 14, 17, 15};

    AvlBiTree T = NULL;

    Status taller;
    for (int i = 0; i < 6; i++)
    {
        insertAVL(&T, a[i], &taller);
    }

    return 0;
}
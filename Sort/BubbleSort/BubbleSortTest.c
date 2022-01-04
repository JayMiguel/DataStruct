#include "BubbleSort.h"

int main()
{
    SqList L = {
        {9, 1, 5, 8, 3, 7, 4, 6, 2},
        9};

    // BubbleSort0(&L);
    // BubbleSort(&L);
    BubbleSort2(&L);

    printSqList(&L);
    return 0;
}
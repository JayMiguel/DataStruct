#include "SelectSort.h"

int main()
{
    SqList L = {{9, 1, 5, 8, 3, 7, 4, 6, 2}, 9};

    SelectSort(&L);

    printSqList(&L);
    return 0;
}
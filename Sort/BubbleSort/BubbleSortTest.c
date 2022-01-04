#include "BubbleSort.h"

int main()
{
    SqList L;
    L.r[0] = 9;
    L.r[1] = 1;
    L.r[2] = 5;
    L.r[3] = 8;
    L.r[4] = 3;
    L.r[5] = 7;
    L.r[6] = 4;
    L.r[7] = 6;
    L.r[8] = 2;
    L.length = 9;

    // BubbleSort0(&L);
    // BubbleSort(&L);
    BubbleSort2(&L);

    printSqList(&L);
    return 0;
}
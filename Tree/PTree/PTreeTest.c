#include "PTFunc.h"

int main()
{
    PTree T;

    CreatePTree(&T, -1);

    printPTree(&T, 0);

    return 0;
}
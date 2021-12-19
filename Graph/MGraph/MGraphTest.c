#include "MGraphFunc.h"

int main()
{
    MGraph G;

    CreateGraph(&G);

    DFSTraverse(&G);

    return 0;
}
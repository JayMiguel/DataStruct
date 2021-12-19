#include "AdjGraphFunc.h"

int main()
{
    GraphAdjList G;

    CreateALGraph(&G);

    DFSTraverse(&G);

    return 0;
}
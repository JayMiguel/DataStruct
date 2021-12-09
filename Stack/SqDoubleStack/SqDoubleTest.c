#include "SqDoubleFunc.h"
#include <stdio.h>

void printStack(const SqDoubleStack S, int stackNumber)
{
    printf("[ ");
    if (stackNumber == 1 && S.top1 != -1)
    {
        for (int i = 0; i < S.top1 + 1; i++)
        {
            printf("%d ", S.data[i]);
        }
    }
    else if (stackNumber == 2 && S.top2 != MAXSIZE)
    {
        for (int i = MAXSIZE - 1; i > S.top2 - 1; i--)
        {
            printf("%d ", S.data[i]);
        }
    }
    printf("]\n");
}

int main()
{
    SqDoubleStack S;

    InitStack(&S);

    printf("push:\n");

    push(&S, 10, 1);
    push(&S, 20, 1);
    printf("\tStack_1: ");
    printStack(S, 1);

    push(&S, 100, 2);
    push(&S, 200, 2);
    printf("\tStack_2: ");
    printStack(S, 2);

    printf("pop:\n");

    SElemType e;
    pop(&S, &e, 1);
    printf("\tStack_1: e = %d ", e);
    printStack(S, 1);

    pop(&S, &e, 2);
    printf("\tStack_2: e = %d ", e);
    printStack(S, 2);
    return 0;
}
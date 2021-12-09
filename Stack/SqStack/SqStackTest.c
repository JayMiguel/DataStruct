#include "SqSFunc.h"
#include <stdio.h>
void printStack(const SqStack *S)
{
    printf("S = [ ");
    for (int i = 0; i < S->top + 1; i++)
    {
        printf("%d ", S->data[i]);
    }
    printf("]\n");
}

int main()
{
    SqStack S;

    InitStack(&S);

    push(&S, 10);
    push(&S, 20);
    printf("push: \t");
    printStack(&S);

    SElemType e;
    pop(&S, &e);
    printf("pop: \te = %d\t", e);
    printStack(&S);

    return 0;
}
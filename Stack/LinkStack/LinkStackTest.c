#include "LinkStackFunc.h"
#include <stdio.h>

void printStack(const LinkStack *S)
{
    LinkStackPtr p = S->top;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    LinkStack *S;
    InitStack(&S);

    push(S, 10);
    push(S, 20);
    push(S, 30);
    printf("push: ");
    printStack(S);
    printf("\n");

    SElemType e;
    pop(S, &e);
    printf("pop: ");
    printStack(S);
    printf(" e = %d\n", e);
    return 0;
}
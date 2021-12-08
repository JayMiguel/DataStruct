#define MAXSIZE 1000
#define ElemType int
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    ElemType data;
    int cur;
} Component, StaticLinkList[MAXSIZE];

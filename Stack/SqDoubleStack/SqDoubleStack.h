#define MAXSIZE 1000
typedef int SElemType;
typedef struct
{
    SElemType data[MAXSIZE];
    int top1;
    int top2;
} SqDoubleStack;
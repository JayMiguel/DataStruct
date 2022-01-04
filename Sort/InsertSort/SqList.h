#define MAXSIZE 10
typedef struct
{
    int r[MAXSIZE + 1];
    int length;
} SqList;

void swap(SqList *L, int i, int j);

void printSqList(SqList *L);
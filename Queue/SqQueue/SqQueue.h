#define MAXSIZE 1000
typedef int QElemType;
typedef struct
{
    QElemType data[MAXSIZE];
    int front;
    int rear;
} SqQueue;
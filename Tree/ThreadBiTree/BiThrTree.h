typedef enum
{
    Link,
    Thread
} PointerTag;
typedef char TElemType;
typedef struct BiThrNode
{
    TElemType data;
    struct BiThrNode *lchild, *rchild;
    PointerTag ltag, rtag;
} BiThrNode, *BiThrTree;
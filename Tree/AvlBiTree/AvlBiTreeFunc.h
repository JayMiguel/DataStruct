#include "AvlBiTree.h"
#include <stdlib.h>
#define LH +1
#define EH 0
#define RH -1
#define TRUE 1
#define FALSE 0
typedef int Status;

void R_Rotate(AvlBiTree *p);

void L_Rotate(AvlBiTree *p);

void R_Balance(AvlBiTree *T);

void L_Balance(AvlBiTree *T);

Status insertAVL(AvlBiTree *T, int value, Status *taller);
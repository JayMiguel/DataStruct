#include "AvlBiTreeFunc.h"

void R_Rotate(AvlBiTree *p)
{
    AvlBiTree L;
    L = (*p)->lchild;
    (*p)->lchild = L->rchild;
    L->rchild = (*p);
    *p = L;
}

void L_Rotate(AvlBiTree *p)
{
    AvlBiTree R;
    R = (*p)->rchild;
    (*p)->rchild = R->lchild;
    R->lchild = (*p);
    *p = R;
}

void R_Balance(AvlBiTree *T)
{
    AvlBiTree R, Rl;
    R = (*T)->rchild;
    switch (R->bf)
    {
    case LH:
        Rl = R->lchild;
        switch (Rl->bf)
        {
        case LH:
            (*T)->bf = RH;
            R->bf = EH;
            break;
        case EH:
            (*T)->bf = EH;
            R->bf = EH;
            break;
        case RH:
            (*T)->bf = LH;
            R->bf = EH;
            break;
        }
        Rl->bf = EH;
        R_Rotate(&(*T)->rchild);
        L_Rotate(T);
        break;
    case RH:
        (*T)->bf = R->bf = EH;
        L_Rotate(T);
        break;
    }
}

void L_Balance(AvlBiTree *T)
{
    AvlBiTree L, Lr;
    L = (*T)->lchild;
    switch (L->bf)
    {
    case LH:
        (*T)->bf = L->bf = EH;
        R_Rotate(T);
        break;
    case RH:
        Lr = L->rchild;
        switch (Lr->bf)
        {
        case LH:
            (*T)->bf = L->bf = RH;
            break;
        case EH:
            (*T)->bf = EH;
            L->bf = EH;
            break;
        case RH:
            (*T)->bf = EH;
            L->bf = EH;
            break;
        }
        Lr->bf = EH;
        L_Rotate(&(*T)->lchild);
        R_Rotate(T);
    }
}

Status insertAVL(AvlBiTree *T, int e, Status *taller)
{
    if (!*T)
    {
        *T = (AvlBiTree)malloc(sizeof(AvlBiNode));
        (*T)->data = e;
        (*T)->lchild = (*T)->rchild = NULL;
        (*T)->bf = EH;
        *taller = TRUE;
    }
    else
    {
        if (e == (*T)->data)
        {
            *taller = FALSE;
            return FALSE;
        }

        if (e < (*T)->data)
        {
            if (!insertAVL(&(*T)->lchild, e, taller))
            {
                return FALSE;
            }
            if (*taller)
            {
                switch ((*T)->bf)
                {
                case LH:
                    L_Balance(T);
                    *taller = FALSE;
                    break;
                case EH:
                    (*T)->bf = LH;
                    *taller = TRUE;
                    break;
                case RH:
                    (*T)->bf = EH;
                    *taller = FALSE;
                }
            }
        }

        if (e > (*T)->data)
        {
            if (!insertAVL(&(*T)->rchild, e, taller))
            {
                return FALSE;
            }
            if (*taller)
            {
                switch ((*T)->bf)
                {
                case LH:
                    (*T)->bf = EH;
                    *taller = FALSE;
                    break;
                case EH:
                    (*T)->bf = RH;
                    *taller = TRUE;
                    break;
                case RH:
                    R_Balance(T);
                    *taller = FALSE;
                    break;
                }
            }
        }
    }
    return TRUE;
}
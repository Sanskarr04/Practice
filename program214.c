#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{}

int Count(PNODE Head)
{
    // return 0;
}

void InsertFirst(PPNODE Head,int no)
{}

void InsertLast(PPNODE HEAD,int no)
{}

void InsertAtPos(PPNODE HEAD,int no, int pos)
{}

void DeleteFirst(PPNODE HEAD)
{}

void DeleteLast(PPNODE HEAD)
{}

void DeleteAtPos(PPNODE HEAD,int pos)
{}

int main()
{
    PNODE First = NULL;
    
    return 0;
}

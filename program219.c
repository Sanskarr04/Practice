#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

void insertFirst(PPNODE Head, PPNODE Tail, int no)
{}

void insertLast(PPNODE Head, PPNODE Tail, int no)
{}

void insertAtPos(PPNODE Head, PPNODE Tail, int no, int pos)
{}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{}

void DeleteLast(PPNODE Head, PPNODE Tail)
{}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int pos)
{}

void Display(PNODE Head, PNODE Tail)
{}

int count(PNODE Head, PNODE Tail)
{}

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;        //#

    return 0;
}

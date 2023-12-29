//Binary Search Tree BST

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn=NULL;
    PNODE temp=*Head;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
        return;
    }
    else
    {
        while (1)
        {
            if(no == temp->data)
            {
                printf("Duplicate element: Unable to insert a number\n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
            else
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
                temp=temp->lchild;    
            }
        }
    }
}

void Display(PNODE Head)
{
    if(Head!=NULL)
    {
        Display(Head->lchild);
        printf("%d\t",Head->data);
        Display(Head->rchild);
    }
}

bool search(PNODE Head, int no)
{
    bool flag=false;
    if(Head==NULL)
    {
        printf("Tree is empty\n");
        return flag;
    }
    else
    {
        while(Head!=NULL)
        {
            if(no==Head->data)
            {
                flag=true;
                break;
            }
            else if(no>Head->data)
            {
                Head=Head->rchild;
            }
            else
            {
                Head=Head->lchild;
            }
        }
        return flag;
    }
}

int main()
{
    PNODE First=NULL;
    Insert(&First,21);
    Insert(&First,23);
    Insert(&First,15);
    Insert(&First,78);
    Insert(&First,45);
    Insert(&First,10);
    Insert(&First,90);
    Insert(&First,18);
    Insert(&First,16);
    Insert(&First,17);
    
    Display(First);
    return 0;
}
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
{
    printf("LinkedList Elements are: \n");
    while (Head!=NULL)
    {
        printf("%d\t",Head->data);
        Head=Head->next;
    }
    printf("\n");
}

int Count(PNODE Head)
{
    int c=0;
    while (Head!=NULL)
    {
        c++;
        Head=Head->next;
    }
    return c;
    
}

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    //Allocate the memory for node.
    newn=(PNODE)malloc(sizeof(NODE)); //newn=(struct Node*)malloc(sizeof(struct Node))

    //Initialise the node
    newn->data = no;
    newn->next=NULL;

    if (*Head==NULL) //LL is emplty
    {
        *Head=newn;
    }
    else            //LL is having some nodes
    {
        newn->next=*Head;
        *Head=newn;
    }
    

}

void InsertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;
    //Allocate memory for node.
    newn=(PNODE)malloc(sizeof(NODE)); //newn=(struct Node*)malloc(sizeof(struct Node))

    //Initialise the node
    newn->data = no;
    newn->next=NULL;

    if (*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        PNODE temp=*Head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        
    }
}

void InsertAtPos(PPNODE Head,int no, int pos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head,int pos)
{}

int main()
{
    PNODE First = NULL;
    int iRet=0;
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,57);
    InsertFirst(&First,64);
    InsertFirst(&First,62);
    Display(First);
    iRet=Count(First);
    printf("Number of nodes in Linkedlist are: %d",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);
    Display(First);

    return 0;
}

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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if (*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
void Display(PNODE Head)
{
    while (Head!=NULL)
    {
        printf("%d\t",Head->data);
        Head=Head->next;
    }
}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn=NULL;
    PNODE temp=*Head;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        
    }
}
int count(PNODE Head)
{
    int c=0;
    while (Head!=NULL)
    {
        c++;
        Head=Head->next;
    }
    return c;
}

void insertAtPos(PPNODE Head, int no, int pos)
{
    int length=count(*Head);
    if (pos<1 || pos>length+1)
    {
        printf("Invalid Position\n");
        return;
    }
    else if(pos==1)
    {
        InsertFirst(First,no);
    }
    else if(pos==length+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        PNODE newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        PNODE temp=*Head;a
        

        for (int i = 1; i < length-1; i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        
        
    }
    
}


int main()
{
    PNODE First=NULL;
    int r=0;

    InsertFirst(&First,22);
    InsertFirst(&First,25);
    InsertFirst(&First,28);
    InsertFirst(&First,33);

    InsertLast(&First,50);
    InsertLast(&First,80);
    InsertLast(&First,60);

    Display(First);
    r=count(First);
    printf("Number of Nodes are %d",r);
    insertAtPos(&First,100,3);
    Display(First);
    r=count(First);
    printf("Number of Nodes are %d",r);
    
    return 0;
}
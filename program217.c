//Doubly Linear LinkedList
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      //#
}NODE, *PNODE, **PPNODE;

void insertFirst(PPNODE Head, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;        //#

    if (*Head==NULL)        //LL is Empty
    {
        *Head=newn;
    }
    else                    //LL contains at least one Node in it
    {
        (*Head)->prev=newn;   //#
        newn->next=*Head;
        *Head=newn;
    }
    
}

void insertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;        //#

    if (*Head==NULL)        //LL is Empty
    {
        *Head=newn;
    }
    else                    //LL contains at least one Node in it
    {
        PNODE temp=*Head;   //type 2 while loop
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;    //# 
        
    }
}

void DeleteFirst(PPNODE Head)
{
    if ((*Head)==NULL)            //LL is empty
    {
        return ;
    }
    else if ((*Head)->next==NULL) //LL contains 1 node
    {
        free(*Head);
        *Head=NULL;
    }
    else                        //LL contains more than 1 node
    {
        *Head=(*Head)->next;
        free((*Head)->prev);    //#
        (*Head) -> prev=NULL;   //#
    }
}

void DeletetLast(PPNODE Head)
{
    PNODE temp=*Head;
    if (*Head==NULL)        //LL is empty
    {
        return ;
    }
    else if ((*Head)->next==NULL)//LL contains 1 node
    {
        free(*Head);
        *Head=NULL;
    }
    else                    //LL contains more than 1 node
    {
        while (temp->next->next!=NULL)//type 3 while loop
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
    
}


void Display(PNODE Head)
{
    printf("NULL<=>");
    while (Head!=NULL)
    {
        // printf("|%d|<=>",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
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

void InsertAtPos(PPNODE Head, int no, int pos)
{
    int length=0;
    length=count(*Head);
    PNODE temp=*Head;

    PNODE newn=NULL;
   

    if (pos<1 || pos>length+1)
    {
        printf("Invalid position");
        return ;
    }
    if (pos==1)
    {
        insertFirst(Head, no);
    }
    else if (pos==length+1)
    {
        insertLast(Head,no);
    }
    else
    {
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
         newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        newn->next=temp->next;
        temp->next->prev=newn;  //#
        temp->next=newn;
        newn->prev=temp;        //#
    }
}
void DeleteAtPos(PPNODE Head, int pos)
{
    int length=0;
    length=count(*Head);
    PNODE temp=*Head;
    if (pos<1 || pos>length)
    {
        printf("Invalid position");
        return ;
    }
    if (pos==1)
    {
        DeleteFirst(Head);
    }
    else if (pos==length)
    {
        DeletetLast(Head);
    }
    else
    {
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        
        temp->next=temp->next->next;
        free(temp->next->prev);     //#
        temp->next->prev=temp;      //#
    }
}

int main()
{
    PNODE First= NULL;

    insertLast(&First,45);
    insertLast(&First,5);
    insertLast(&First,46);
    insertLast(&First,48);
    Display(First);
    
    return 0;
}
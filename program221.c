//Doubly Circular LL

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void insertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if (*Head==NULL && *Tail==NULL)
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        newn->next=*Head;
        (*Head)->prev=newn;

        (*Head)->newn;
    }

    (*Head)->prev=*Tail;
    (*Tail)->next=*Head;
    
}

void insertLast(PPNODE Head, PPNODE Tail, int no)
{
    NODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if (*Head==NULL && *Tail==NULL)
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        (*Tail)->next=newn;
        newn->prev=*Tail;

        *Tail=newn;
    }

    (*Head)->prev=*Tail;
    (*Tail)->next=*Head;
}


void insertAtPos(PPNODE Head, PPNODE Tail, int no, int pos)
{
    int length=count(*Head,*Tail);
    PNODE temp=*Head;
    PNODE newn=NULL;

    if (pos<1 || pos>length+1)
    {
        printf("Invalid position");
        return;
    }
    if (pos==1)
    {
        insertFirst(Head,Tail,no);
    }
    
    else if (pos==length+1)
    {
        insertLast(Head,Tail,no);
    }
    else
    {
        for (int i = 1; i < length-1; i++)
        {
            temp=temp->next;
        }
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;
        
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
    
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if(*Head==*Tail)
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        *Head=(*Head)->next;
        free((*Tail)->next);

        (*Tail)->next=*Head;
        (*Head)->prev=*Tail;
    }
    
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    
    if ((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if(*Head==*Tail)
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        *Tail=(*Tail)->prev;
        free((*Tail)->next);  //free((*Head)->prev)
        (*Head)->prev=*Tail;
        (*Tail)->next=*Head;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int pos)
{
    int length=count(*Head,*Tail);
    PNODE temp=*Head;

    if (pos<1 || pos>length)
    {
        printf("Invalid position");
        return;
    }
    if (pos==1)
    {
        DeleteFirst(Head,Tail);
    }
    
    else if (pos==length)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for (int i = 1; i < length-1; i++)
        {
            temp=temp->next;
        }
        

        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if (Head!=NULL && Tail!=Tail)
    {
        do{
            printf("%d",Head->data);
            Head=Head->next;
        }while (Head!=Tail->next);
        printf("\n");
    }
    else{
        printf("Linked List is empty");
    }
    
}

int count(PNODE Head, PNODE Tail)
{
    int c=0;
    if (Head!=NULL && Tail!=Tail)
    {
        do{
            c++;
            Head=Head->next;
        }while (Head!=Tail->next);
        return c;
    }
    else{
        return 0;
    }
}

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;
    int r=0;
    insertFirst(&First,&Last,51);
    insertFirst(&First,&Last,21);
    insertFirst(&First,&Last,11);

    insertLast(&First,&Last,101);
    insertLast(&First,&Last,111);
    insertLast(&First,&Last,121);
    Display(First,Last);
    count(First,Last);
    r=printf("Number of nodes are %d",r);
    return 0;
}
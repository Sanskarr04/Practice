//Singly circular LL

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

void insertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if ((*Head==NULL) && (*Tail==NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;
    }else                               //LL is not empty
    {
        newn->next=*Head;
        *Head=newn;
    }
    (*Tail)->next=*Head;
    
}

void insertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if ((*Head==NULL) && (*Tail==NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;

        (*Tail)->next=*Head;
    }else                               //LL is not empty
    {
        (*Tail)->next=newn;
        (*Tail)=(*Tail)->next;  //(*Tail)=newn;
    }
    (*Tail)->next=*Head;
}



void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if (*Head==NULL && *Tail==NULL)
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
        (*Head)=(*Head)->next;
        free((*Tail)->next);
        (*Tail)->next=*Head;
    }
    
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if (*Head==NULL && *Tail==NULL)
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
        PNODE temp=*Head;
        while (temp->next!=*Tail)
        {
            temp=temp->next;
        }
        free(*Tail);
        *Tail=temp;
        (*Tail)->next=*Head;
  
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int pos)
{
    PNODE temp=*Head;
    PNODE tempX=NULL;
    int length=0;
    length=count(*Head,*Tail);
    if (pos<length || pos>length)
    {
        printf("Invalid position");
        return;
    }
    if (pos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(pos==length)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for (int i = 1; i < length-1; i++)
        {
            temp=temp->next;
        }
        tempX=temp->next;
        free(tempX);
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if (Head!=NULL && Tail!=NULL)
    {
        do
        {
            printf("|%d|->",Head->data);
            Head=Head->next;
        } while (Head!=Tail->next);
        
    }
    else
    {
        printf("Linked List is Empty");
    }
    
}

int count(PNODE Head, PNODE Tail)
{
    int c=0;
    if (Head!=NULL && Tail!=NULL)
    {
        do
        {
            c++;
            Head=Head->next;
        } while (Head!=Tail->next);
        return c;
    }
    else
    {
        return 0;
    }
    
}
void insertAtPos(PPNODE Head, PPNODE Tail, int no, int pos)
{
    PNODE temp=*Head;
    int length=0;
    length=count(*Head,*Tail);
    PNODE newn=NULL;
    if (pos<length || pos>length+1)
    {
        printf("Invalid position");
        return;
    }
    if (pos==1)
    {
        insertFirst(Head,Tail,no);
    }
    else if(pos==length+1)
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
        
        newn->next=temp->next;
        temp->next=newn;
    }
    
    
}

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;        //#
    int iRet=0;

    insertFirst(&First,&Last,51);
    insertFirst(&First,&Last,21);
    insertFirst(&First,&Last,11);

    insertLast(&First,&Last,101);
    insertLast(&First,&Last,111);
    insertLast(&First,&Last,121);
    
    Display(First,Last);
    iRet=count(First,Last);

    printf("Number of nodes are: %d\n",iRet);

    insertAtPos(&First,&Last,55,4);
    Display(First,Last);
    iRet=count(First,Last);

    printf("Number of nodes are: %d\n",iRet);

    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet=count(First,Last);

    printf("Number of nodes are: %d\n",iRet);
    return 0;
}

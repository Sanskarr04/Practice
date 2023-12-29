#include<stdio.h>
#include<stdlib.h>

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

struct Node
{
    int data;
    struct Node *next;
};
//  1   Allocate the memory
//  2   Initialise the node
//  3   check wheather LL is empty or not
//  4   If LL is empty store address of new node in first
//  5   Otherwise store the address of newnode inside next pointer of old node
//  6   Udate Firstr pointer with the address of new node

void insertFirst(PPNODE Head,int no)
{
    
    PNODE newn=NULL;
    
    //Allocate memory for new node
    newn=(PNODE)malloc(sizeof(NODE));

    //initialise the node
    newn->data=no;
    newn->next=NULL;

    //3
    if (*Head == NULL)
    {
        *Head=newn;//4
    }
    else
    {
        newn->next=*Head;//5
        *Head = newn;   //6
    }
    
}
void insertLast(PPNODE Head,int no)
{
    
    PNODE newn=NULL;
    PNODE temp=*Head;
    
    //Allocate memory for new node
    newn=(PNODE)malloc(sizeof(NODE));

    //initialise the node
    newn->data=no;
    newn->next=NULL;

    //3
    if (*Head == NULL)
    {
        *Head=newn;//4
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp =temp->next; 
        }
        temp->next=newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements in LinkedList are: \n");
    while (Head!=NULL)
    {
        printf("|%d|->",Head->data);
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
void DeleteFirst(PPNODE Head)
{
    PNODE temp=*Head;
    if (*Head==NULL)
    {
        return;
    }
    else if ((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        *Head=(*Head)->next;
        free(temp);//we removed address
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    if (*Head==NULL)
    {
        return;
    }
    else if ((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }

        free(temp->next);
        temp->next=NULL;
    }
}
void InsertAtPos(PPNODE Head,int pos,int no)
{
    int iLeangth=0;
    iLeangth=count(*Head);
    
    PNODE newn=NULL;
    PNODE temp=*Head;
    if (pos<1 || pos>iLeangth+1)
    {
        printf("Invalid position\n");
        return;
    }
    else if(pos==1)
    {
        insertFirst(Head,no);
    }
    else if(pos==iLeangth+1)
    {
        insertLast(Head,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        //sequence is important
        newn->next=temp->next;
        temp->next = newn;
        
    }
    
}
void DeleteAtPos(PPNODE Head,int pos)
{
    int iLeangth=0;
    iLeangth=count(*Head);
    PNODE temp=*Head;
    PNODE tempX=NULL;
    if (pos<1 || pos>iLeangth)
    {
        printf("Invalid position");
        return;
    }
    else if(pos==1)
    {
        DeleteFirst(Head);
    }
    else if(pos==iLeangth)
    {
        DeleteLast(Head);
    }
    else
    {
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        //sequence is important
        tempX=temp->next;
        temp->next=temp->next->next;
        free(tempX);
        

    }
}
int main()
{
    PNODE First=NULL;
    int r=0;
    insertFirst(&First,11);
    insertFirst(&First,12);
    insertFirst(&First,13);
    insertFirst(&First,14);
    insertFirst(&First,55);
    insertFirst(&First,56);
    insertFirst(&First,57);
    // Display(First);
    // r=count(First);
    // printf("Number of Elements in LinkedList are: %d\n",r);
    printf("---------------\n");
    InsertAtPos(&First,5,25);
    Display(First);
    DeleteAtPos(&First,2);
    DeleteAtPos(&First,2);
    DeleteAtPos(&First,2);
    Display(First);
    r=count(First);
    printf("Number of Elements in LinkedList are: %d\n",r);
    // DeleteFirst(&First);
    // DeleteFirst(&First);
    // Display(First);
    // r=count(First);
    // printf("Number of Elements in LinkedList are: %d\n",r);
    // DeleteLast(&First);
    // Display(First);
    // r=count(First);
    // printf("Number of Elements in LinkedList are: %d\n",r);
    // InsertAtPos(&First,5,10);
    return 0;
}
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
int maximum(PNODE Head)
{
    int max=0;
    if (Head==NULL)
    {
        return -1;
    }
    max=Head->data;
    
    while (Head!=NULL)
    {
        if (Head->data>max)
        {
            max=Head->data;
        }
        
        Head=Head->next;
    }
    return max;
    
}
int minimum(PNODE Head)
{
    int min=0;
    if (Head==NULL)
    {
        return -1;
    }
    min=Head->data;
    
    while (Head!=NULL)
    {
        if (Head->data<min)
        {
            min=Head->data;
        }
        
        Head=Head->next;
    }
    return min;
}
void CheckPerfect(PNODE Head)
{
    int no=0;
    int iSUm=0;
    
    while (Head!=NULL)
    {
        no=Head->data;
        for (int i = 1; i <= no/2; i++)
        {
            if (no%i==0)
            {
                iSUm=iSUm+i;
            }
        }
        if (iSUm==no)
        {
            printf("%d is perfect number\n",no);
        }
        Head=Head->next;
    }
    
}
int main()
{
    PNODE First=NULL;
    int max=0;
    insertFirst(&First,111);
    insertFirst(&First,28);
    insertFirst(&First,51);
    insertFirst(&First,496);
    insertFirst(&First,11);
    Display(First);
    // max=minimum(First);
    // printf("Maximum: %d",max);  
    CheckPerfect(First);
    return 0;
}
// //Signly linear linkedlist
// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// typedef struct Node NODE;
// typedef struct Node *PNODE;
// typedef struct Node **PPNODE;

// void insertFirst(PPNODE Head, int no)
// {
//     PNODE newn=NULL;
//     newn=(PNODE)malloc(sizeof(NODE));
//     newn->data=no;
//     newn->next=NULL;
//     if (*Head==NULL)
//     {
//         *Head=newn;
//     }
//     else
//     {
//         newn->next=*Head;
//         *Head=newn;
//     }
//     // printf("%u",newn);
// }
// void insertLast(PPNODE Head,int no)
// {
//     PNODE newn=NULL;
//     PNODE temp=*Head;
//     newn=(PNODE)malloc(sizeof(NODE));
//     newn->data=no;
//     newn->next=NULL;

//     if (*Head==NULL)
//     {
//         *Head=newn;
//     }
//     else
//     {
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newn;
//     }
    
// }
// void display(PNODE Head)
// {
//     while (Head!=NULL)
//     {
//         printf("|%d|",Head->data);
//         Head=Head->next;
//     }
// }

// int main()
// {
//     PNODE First=NULL;
//     insertFirst(&First,50);
//     insertFirst(&First,40);
//     insertLast(&First,99);
//     insertLast(&First,88);
//     display(First);

// }


//------------------------------------------------------------


#include<stdio.h>
#include<stdlib.h>

struct block
{
    int val;
    struct block *next;
};

typedef struct block BLOCK;
typedef struct block *PBLOCK;
typedef struct block **PPBLOCK;

void insertFirst(PPBLOCK First, int no)
{
    PBLOCK newn=NULL;
    newn=(PBLOCK)malloc(sizeof(BLOCK));
    newn->val=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }
    
}
void display(PBLOCK ll)
{
    while(ll!=NULL)
    {
        printf("|%d|",ll->val);
        ll=ll->next;
    }
}
void insertLast(PPBLOCK First, int no)
{
    PBLOCK newn=NULL;
    PBLOCK temp=*First;
    newn=(PBLOCK)malloc(sizeof(BLOCK));
    newn->val=no;
    newn->next=NULL;

    if (*First==NULL)
    {
        *First=newn;
    }
    else
    {
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        
    }
}


int main()
{
    PBLOCK fr=NULL;
    
    insertFirst(&fr,533);
    insertFirst(&fr,57);
    insertFirst(&fr,79);
    insertLast(&fr,22);
    display(fr);
    return 0;
}





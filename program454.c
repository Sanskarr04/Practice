//BINARY SEARCH TREE (BST)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int No)
{
    PNODE newn=NULL;
    PNODE temp=*Head;
    
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->lchild=NULL;
    newn->rchild=NULL;


    if(*Head == NULL)
    {
        *Head=newn;
    }
    else
    {
        while(1)
        {
            if(No==temp->data)
            {
                printf("Duplicate element : Unable to Insert \n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp ->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp=temp->lchild;
            }
        }
    }
}
void Preorder(PNODE Head)
{
    if(Head!=NULL)
    {
        printf("%d\t",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\t",Head->data);
    }
}

void Inorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
}

bool Search(PNODE Head, int No)
{
    bool flag= false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return flag;
    }
    while(Head != NULL)
    {
        if(No == Head -> data)
        {
            flag=true;
            break;
        }
        else if(No > Head->data)
        {
            Head = Head->rchild;
        }
        else if(No < Head -> data)
        {
            Head= Head->lchild;
        }
    }
    return flag;
}

int CountNodes(PNODE Head)
{
    static int icnt=0;
    if(Head!= NULL)
    {
        icnt++;
        CountNodes(Head->lchild);
        CountNodes(Head->rchild);
    }
    return icnt;
}

int CountLeafNodes(PNODE Head)
{
    static int icnt=0;
    if(Head!=NULL)
    {
        if((Head->lchild == NULL) && (Head ->rchild == NULL))
        {
            icnt++;
        }
        CountLeafNodes(Head->lchild);
        CountLeafNodes(Head->rchild);
    }
    return icnt;
}

int CountParentNodes(PNODE Head)
{
    static int icnt=0;
    if(Head!=NULL)
    {
        if((Head->lchild != NULL) || (Head ->rchild != NULL))
        {
            icnt++;
        }
        CountParentNodes(Head->lchild);
        CountParentNodes(Head->rchild);
    }
    return icnt;
}

int main()
{
    PNODE First=NULL;
    bool bRet= false;

    // Insert(&First,21);
    // Insert(&First,23);
    // Insert(&First,15);
    // Insert(&First,78);
    // Insert(&First,48);
    // Insert(&First,10);
    // Insert(&First,90);
    // Insert(&First,18);
    // Insert(&First,7);
    Insert(&First,21);
    Insert(&First,23);
    Insert(&First,15);
    Insert(&First,78);
    Insert(&First,45);
    Insert(&First,10);
    Insert(&First,90);
    Insert(&First,18);
    Insert(&First,17);
    Insert(&First,16);

    printf("\nElements in preorder format: \n");
    Preorder(First);

    printf("\nElements in postorder format: \n");
    Postorder(First);
    
    printf("\nElements in Inorder format: \n");
    Inorder(First);
    bRet=Search(First, 15);
    if(bRet==true)
    {
        printf("Element is present in BST\n");
    }
    else {
        printf("Element is not there BST\n");
    }

    printf("Number of nodes in BST are: %d\n",CountNodes(First));

    printf("Number of Leaf nodes are in BST %d\n",CountLeafNodes(First));

    printf("Numberr of Parent nodes in BST %d\n",CountParentNodes(First));

    return 0;
}
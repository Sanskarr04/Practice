#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE;

class SinglyLL
{
    private:
        PNODE First;        //Characteristics
        int iCnt;           //Characteristics

    public:
        SinglyLL();
        ~SinglyLL();
            
        void InsertFirst(int no);
        void InsertLast(int no);
        void InserAtPos(int no, int pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
        
        void Display();
        int Count();

};
//Implementation of all Behaviour

/*
    Return_Value Class_Name :: Function_Name(Parameter_List)
    {
        Function Body;
    }
*/

void SinglyLL::InsertFirst(int no)
{
    PNODE newn=NULL;

    newn=new NODE;//newn=(PNODE)malloc(sizeof(NODE));----in c 

    newn->data=no;
    newn->next=NULL;
    
    if (First==NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First=newn;
    }
    
    iCnt++;
}

void SinglyLL::InsertLast(int no)
{
    PNODE newn=NULL;

    newn=new NODE;//newn=(PNODE)malloc(sizeof(NODE));----in c 

    newn->data=no;
    newn->next=NULL;
    
    if (First==NULL)
    {
        First=newn;
    }
    else
    {
        PNODE temp=First;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;        
    }
    
    iCnt++;
}

void SinglyLL::DeleteFirst()
{
    if (First==NULL)
    {
        return;
    }
    else if(First->next==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        PNODE temp=First;

        First=First->next;
        delete temp;
    }
    iCnt--;
       
}

void SinglyLL::DeleteLast()
{
    if (First==NULL)
    {
        return;
    }
    else if(First->next==NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        PNODE temp=First;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    iCnt--;
}



void SinglyLL::Display()
{
    PNODE temp=First;
    cout<<"NULL->";
    while (temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp=temp->next;
    }
    cout<<" Null\n";
    
}

int SinglyLL::Count()
{
    return iCnt;
}
SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First=NULL;
    iCnt=0;
}
SinglyLL::~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

void SinglyLL::InserAtPos(int no, int pos)
{
    if (iCnt<0 || pos>iCnt+1)
    {
        cout<<"invalid position\n";
        return;
    }
    if (pos==1)
    {
        InsertFirst(no);
    }
    else if(pos==iCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp=First;
        for (int i = 1; i < iCnt-1; i++)
        {
            temp=temp->next;
        }
        PNODE newn=new NODE;
        newn->data=no;
        newn->next=NULL;

        newn->next=temp->next;
        temp->next=newn;
        iCnt++;
        
    }        
}
void SinglyLL::DeleteAtPos(int pos)
{
    if (pos<iCnt || pos>iCnt)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if (pos==1)
    {
        DeleteFirst();
    }
    else if(pos==iCnt)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp=First;
        PNODE tempX=NULL;
        for (int i = 1; i < iCnt-1;i++)
        {
            temp=temp->next;
        }
        
        tempX=temp->next;
        temp->next=temp->next->next;
        delete tempX;
        iCnt--;        
    }
}

int main()
{
    int iRet=0;

    SinglyLL obj1;
    
    obj1.InsertLast(51);
    obj1.InsertLast(21);
    obj1.InsertLast(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.Display();
    // obj1.InserAtPos(55,4);
    // obj1.Display();
    iRet=obj1.Count();
    cout<<"number of elements in ll is "<<iRet<<"\n";

    
    

    return 0;
}
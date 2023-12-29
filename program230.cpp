//Singly CL
#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        node *next;

        node()
        {
            data=0;
            next=NULL;
        }
        node(int value)
        {
            data=value;
            next=NULL;
        }
}NODE, *PNODE;

class LinkedList
{
    public:
        PNODE First;
        int icnt;

        LinkedList()
        {
            First=NULL;
            icnt=0;
        }

        virtual void InsertFirst(int no)=0;
        virtual void InsertLast(int no)=0;
        virtual void InsertAtPos(int no,int pos)=0;
        virtual void DeleteFirst()=0;
        virtual void DeleteLast()=0;
        virtual void DeleteAtPos(int pos)=0;

        void Display()
        {
            PNODE temp=First;
            for(int i=1;i<=icnt;i++)
            {
                cout<<"| "<<temp->data<<" |->";
                temp=temp->next;
            }
        }
        int Count()
        {
            return icnt;
        }
};

class SinglyCL : public LinkedList
{
    private:
        PNODE Last;
    public:
        SinglyCL();
        ~SinglyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);

};

SinglyCL::SinglyCL()
{
    PNODE Last=NULL;
}
SinglyCL::~SinglyCL()
{}
void SinglyCL::InsertFirst(int no)
{
    PNODE newn=new NODE(no);
    if (First==NULL && Last==NULL)
    {
        First=newn;
        Last=newn;
    }
    else
    {
        newn->next=First;
        First=newn;
    }
    Last->next=newn;
    icnt++;
}
void SinglyCL::InsertLast(int no)
{
    PNODE newn=new NODE(no);
    if (First==NULL && Last==NULL)
    {
        First=newn;
        Last=newn;
    }
    else
    {
        Last->next=newn;
        newn->next=First;
        Last=newn;
    }
    Last->next=newn;
    icnt++;
}
void SinglyCL::InsertAtPos(int no, int pos)
{
    if (pos<1 || pos>icnt+1)
    {
        cout<<"Invalid position";
        return;
    }
    else if (pos==1)
    {
        InsertFirst(no);
    }
    else if(pos==icnt+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp=First;
        PNODE newn=new NODE(no);
        for(int i=1;i<icnt-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        icnt++;
    }
    
}
void SinglyCL::DeleteFirst()
{
    if (icnt==0)
    {
        return;
    }
    else if(icnt==1)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        Last->next=First;
    }
    icnt--;
}

void SinglyCL::DeleteLast()
{
    if (icnt==0)
    {
        return;
    }
    else if(icnt==1)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        PNODE temp=First;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        PNODE tempX=temp->next;
        Last=temp->next->next;
        delete tempX;
    }
    icnt--;
}
void SinglyCL::DeleteAtPos(int pos)
{
    if (pos<1 || pos>icnt)
    {
        cout<<"Invalid position";
        return;
    }
    if(pos==1)
    {
        DeleteFirst();
    }
    else if(pos==icnt)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp=First;
        PNODE tempX=NULL;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        tempX=temp->next;
        temp->next=temp->next->next;
        delete tempX;
    }   
}
int main()
{
    SinglyCL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(79);
    obj.Display();
    return 0;
}
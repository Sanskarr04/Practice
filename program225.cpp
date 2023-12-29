#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;
        Node *prev;
        

        Node()
        {
            data=0;
            next=NULL;
            prev=NULL;
        }
        Node(int value)
        {
            data=value;
            next=NULL;
            prev=NULL;
        }
}NODE,*PNODE;

class LinkedList
{
    public:
        PNODE First;
        int iCount;

        LinkedList()
        {
            First=NULL;
            iCount=0;
        }

        virtual void insertFirst(int no)=0;
        virtual void insertLast(int no)=0;
        virtual void insertAtPos(int no,int pos)=0;

        virtual void deleteFirst()=0;
        virtual void deleteLast()=0;
        virtual void deleteAtPos(int pos)=0;

        void Display()
        {
            PNODE temp=First;
            cout<<"Elements of LinkedList are: "<<"\n";
            for (int i = 1; i <= iCount; i++)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<"NULL"<<"\n";
            
        }
        int count()
        {
            return iCount;
        }
};

class DoublyCL : public LinkedList
{
    private:
        
        PNODE Last;
        
    public:
        
        DoublyCL();
        ~DoublyCL();

        void insertFirst(int no);
        void insertLast(int no);
        void insertAtPos(int no,int pos);
        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int pos);
        
};
DoublyCL::DoublyCL()
{
    Last=NULL;
}
DoublyCL::~DoublyCL()
{}
void DoublyCL::insertFirst(int no)
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
        First->prev=newn;
        First=newn;
        
    }
    Last->next=First;
    First->prev=Last;
    iCount++;
}
void DoublyCL::insertLast(int no)
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
        newn->prev=Last;
        Last=Last->next;        
    }
    Last->next=First;
    First->prev=Last;
    iCount++;
}
void DoublyCL::insertAtPos(int no, int pos)
{
    if (pos<1 || pos>iCount+1)
    {
        cout<<"invalid position";
        return;
    }
    if (pos==1)
    {
        insertFirst(no);
    }
    else if(pos==iCount+1)
    {
        insertLast(no);
    }
    else
    {
        PNODE temp=First;

        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        PNODE newn=new NODE(no);

        newn->next=temp->next;
        temp->next->prev=newn;

        temp->prev=newn;
        newn->prev=temp;

        iCount++;
    }
}
void DoublyCL::deleteFirst()
{
    if (iCount==0)
    {
        return;
    }
    else if(iCount==1)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;

        First->prev=Last;
        Last->next=First;

    }
    iCount--;
    
}
void  DoublyCL::deleteLast()
{
    if (iCount==0)
    {
        return;
    }
    else if(iCount==1)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        // First->prev=Last->prev;
        // delete Last;
        Last=Last->prev;
        delete Last->next;

        First->prev=Last;
        Last->next=First;

    }
    iCount--;
    
}
void  DoublyCL::deleteAtPos(int pos)
{
    
    if (pos<1 || pos>iCount)
    {
        cout<<"invalid position";
        return;
    }
    if (pos==1)
    {
        deleteFirst();
    }
    else if(pos==iCount)
    {
        deleteLast();
    }
    else
    {
        PNODE temp=First;
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        iCount--;
    }
}



int main()
{
    DoublyCL obj;
    obj.insertLast(41);
    obj.insertLast(21);
    obj.insertLast(11);
    obj.insertLast(101);
    obj.insertLast(111);
    obj.Display();
    obj.deleteLast();
    obj.Display();
    cout<<"Length of LinkedList is : "<<obj.count()<<"\n";

    return 0;
}
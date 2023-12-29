//DoublyLL

#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        node *next;
        node *prev;

        node()
        {
            data=0;
            next=NULL;
            prev=NULL;
        }
        node(int value)
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
        int iCnt;
        
        LinkedList()
        {
            First=NULL;
            iCnt=0;
        }

        virtual void InsertFirst(int no) = 0;
        virtual void InsertLast(int no) = 0;
        virtual void InsertAtPos(int no, int pos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int pos) = 0;

        void Display()
        {
            PNODE temp = First;

            cout<<"Elements of Linked List are : "<<"\n";

            for(int i = 1; i <= iCnt; i++)
            {
                cout<<"| "<<temp->data<<" |-> ";
                temp = temp -> next;
            }
            cout<<"NULL"<<"\n";
        }

        int Count()
        {
            return iCnt;
        }

};

class DoublyLL : public LinkedList
{
    private:
        PNODE First;
        int iCnt;
    public:
        DoublyLL();
        ~DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
};
void DoublyLL::InsertFirst(int no)
{
    PNODE newn=new NODE(no);

    if (First==NULL)
    {
        First=newn;
    }
    else
    {
        First->prev=newn;
        newn->next=First;
        First=newn;
    }
    iCnt++;
}
void DoublyLL::InsertLast(int no)
{
    PNODE newn=NULL;
    newn=new NODE(no);

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
        newn->prev=temp;        
    }
    iCnt++;
}
void DoublyLL::InsertAtPos(int no, int pos)
{
    if (pos<1 || pos>iCnt+1)
    {
        cout<<"Invalid position\n";
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
        PNODE newn=new NODE(no);
        PNODE temp=First;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
        iCnt++;
    }
}
void DoublyLL::DeleteFirst()
{
    if (First==NULL)
    {
        return;
    }
    if (First->next==NULL)
    {
        delete First;
        First=NULL;
    }
    else{
        First=First->next;
        delete First->prev;
        First->prev=NULL;
    }
    iCnt--;
}
void DoublyLL::DeleteLast()
{
    if (First==NULL)
    {
        return;
    }
    if(First->next==NULL)
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
void DoublyLL::DeleteAtPos(int pos)
{
    if (pos<1 || pos>iCnt)
    {
        cout<<"Invalis position\n";
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
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        iCnt--;        
    }
}

DoublyLL::DoublyLL()
{
    iCnt=0;
    First=NULL;
}
DoublyLL::~DoublyLL()
{}

int main()
{
    DoublyLL obj;
    int choice=0;
    int pstn=0;
    int value=0;
    int cnt=0;
    cout<<"---------------------------------------\n";
    cout<<"  Welcome to Doubly Linear LinkedList\n";
    cout<<"---------------------------------------\n";
    while (1)
    {
        
        cout<<"1: Insert node at First position\n";
        cout<<"2: Insert node at Last position\n";
        cout<<"3: Insert node at given position\n";
        cout<<"4: Delete node from First position\n";
        cout<<"5: Delete node from last position\n";
        cout<<"6: Delete node from given position\n";
        cout<<"7: Display the elements of Linked List\n";
        cout<<"8: Count number of nodes from LinkedList\n";
        cout<<"9: Terminate the applucation\n";
        cout<<"--------------------------------------\n";
        cout<<"Please enter your choice: \n";
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            cout<<"Enter the value you want to Insert at First\n";
            cin>>value;
            obj.InsertFirst(value);
            break;
        case 2:
            cout<<"Enter the value you want to Insert at Last\n";
            cin>>value;
            obj.InsertLast(value);
            break;
        case 3:
            cout<<"Enter value you want to insert\n";
            cin>>value;
            cout<<"Enter position\n";
            cin>>pstn;
            obj.InsertAtPos(value,pstn);
            break;
        case 4:
            obj.DeleteFirst();
            cout<<"Deleted successfully\n";
            break;
        case 5:
            obj.DeleteLast();
            cout<<"Deleted successfully\n";
            break;
        case 6:
            cout<<"Enter position\n";
            cin>>pstn;
            obj.DeleteAtPos(pstn);
            cout<<"Deleted Successfully\n";
            break;
        case 7:
            {
                obj.Display();
                break;
            }
            break;
        case 8:
            cnt=obj.Count();
            cout<<"Number of Nodes inside the Linked list are: "<<cnt<<"\n";
            obj.Count();
            break;
        case 9: 
            cout<<"Thank you for using this application";
            return 0;
        default:
            cout<<"Invalid choice\n";
            break;
        }
    }
    return 0;
}
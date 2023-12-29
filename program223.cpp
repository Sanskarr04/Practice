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
    PNODE temp=First;
    for (int i = 1; i <= iCnt; i++)
    {
        temp=First;
        First=First->next;
        delete temp;
    }
    // for (int i = 1; i <= iCnt; i++)
    // {
    //     delete temp;
    //     temp=First->next;
    // }
    
    
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
        for (int i = 1; i < pos-1; i++)
        {
            temp=temp->next;
        }
        PNODE newn=new NODE<T>;
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
        for (int i = 1; i < pos-1;i++)
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
    SinglyLL obj;
    int iChoice=0;
    int iValue=0;
    int iPos=0;

    while (1)
    {
        
        cout<<"------------------------------\n";
        
        cout<<"1: Insert node at First position\n";
        cout<<"2: Insert node at Last position\n";
        cout<<"3: Insert node at given position\n";
        cout<<"4: Delete node from First position\n";
        cout<<"5: Insert node from last position\n";
        cout<<"6: Insert node from given position\n";
        cout<<"7: Display the elements of Linked List\n";
        cout<<"8: Count number of nodes from LinkedList\n";
        cout<<"9: Terminate the applucation\n";
        cout<<"Please enter your choice: \n";
        cin>>iChoice;
        cout<<"-------------------------------\n";
        

        switch (iChoice)
        {
            case 1:
                cout<<"Enter the value that you want to insert\n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;
            case 2:
                cout<<"Enter the value that you want to insert\n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;
            case 3:
                cout<<"Enter the value that you want to insert\n";
                cin>>iValue;
                cout<<"Insert the position you want to insert\n";
                cin>>iPos;
                obj.InserAtPos(iValue,iPos);
                break;
            case 4:
                obj.DeleteFirst();
                cout<<"First position deleted successfully\n";
                break;
            case 5:
                obj.DeleteLast();
                cout<<"Last node deleted sucessfully\n";
                break;
            case 6:
                cout<<"Insert the position you want to delete\n";
                cin>>iPos;
                obj.DeleteAtPos(iPos);
                break;
            case 7:
                obj.Display();
                break;
            case 8:
                obj.Count();
                break;
            case 9:
                cout<<"Thank you for using the application\n";
                return 0;
            default:
                cout<<"Invalid choice\n";
                break;
        }
    }
    return 0;
}
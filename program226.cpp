//Stack
#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        struct node *next;
        
        node(int value)
        {
            data=value;
            next=NULL;
        }
}NODE, *PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;
    public:
        Stack();
        int push(int no);  //insertLast()
        int pop();         //deleteLast()
        void Display();
        int Count();
};

Stack::Stack()
{
    First=NULL;
    iCount=0;
}
int Stack::push(int no)
{
    PNODE newn=new node(no);

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
        iCount++;
    }
}
int Stack::pop()
{
    int value=0;
    if (iCount==0)
    {
        cout<<"Stack is empty";
        return -1;
    }
    else if (iCount==1)
    {
        value=First->data;
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
        value=temp->next->next;
        delete temp->next;
        temp->next=NULL;
    }
    iCount--;
    return value;
}
void Stack::Display()
{
    PNODE temp=First;
    if (First==NULL)
    {
        cout<<"Nothing to Display as an stack is empty";
        return;
    }
    
    cout<<"Elements of stack are:\n";
    for(int i=1;i<=iCount;i++)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}
int Stack::Count()
{
    return iCount;
}

int main()
{
    int choice=1;
    int val=0;
    int ret=0;
    Stack obj;
    cout<<"Dynamic implementation of stack\n";
    cout<<"---------------------------------------\n";
    while (choice!=0)
    {
        cout<<"-------------------------------------\n";
        cout<<"Please enter the option: \n";
        cout<<"1: Push ement into stack\n";
        cout<<"2: Pop element from the stack\n";
        cout<<"3: Display elements from stack\n";
        cout<<"4: Count number of elements from stack\n";
        cout<<"0: Terminate the application";
        cout<<"--------------------------------------\n";
        cout<<"Enter your choice\n";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter number\n";
            cin>>val;
            obj.push(val);
            break;
        case 2:
            cout<<"Enter number\n";
            cin>>val;
            ret=obj.pop(val);
            if (ret!=-1)
            {
                cout<<"Poped element from stack: "<<ret<<"\n";
            }
            break;
        case 3:
            obj.Display();
            break;
        case 4:
            ret=obj.Count();
            cout<<"Number of elements in stack are: "<<ret<<"\n";
            break;
        case 0:
            cout<<"Thank you for using Stack\n";
        default:
            cout<<"Enter valid option\n";
            break;
        }//end of switch
    }//end of while
    
    return 0;
}//end of main
//Queue
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

class Queue
{
    private:
        PNODE First;
        int iCount;
    public:
        Queue();
        void Enqueue(int no);  //insertLast()
        int Dequeue();         //deleteFirst()
        void Display();
        int Count();
};

Queue::Queue()
{
    First=NULL;
    iCount=0;
}
void Queue::Enqueue(int no)  //InsertLast
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
int Queue::Dequeue()    //DeleteFirst
{
    int value=0;
    if (iCount==0)
    {
        cout<<"Queue is empty";
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
        value=First->data;
        delete temp;
        First=NULL;
    }
    iCount--;
    return value;
}
void Queue::Display()
{
    PNODE temp=First;
    if (First==NULL)
    {
        cout<<"Nothing to Display as an queue is empty";
        return;
    }
    
    cout<<"Elements of queue are:\n";
    for(int i=1;i<iCount;i++)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}
int Queue::Count()
{
    return iCount;
}

int main()
{
    int choice=1;
    int val=0;
    int ret=0;
    Queue obj;
    cout<<"Dynamic implementation of queue\n";
    cout<<"---------------------------------------\n";
    while (choice!=0)
    {
        cout<<"-------------------------------------\n";
        cout<<"Please enter the option: \n";
        cout<<"1: Insert element into queue\n";
        cout<<"2: Remove element from the queue\n";
        cout<<"3: Display elements from queue\n";
        cout<<"4: Count number of elements from queue\n";
        cout<<"0: Terminate the application";
        cout<<"--------------------------------------\n";
        cout<<"Enter your choice\n";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter number\n";
            cin>>val;
            obj.Enqueue(val);
            break;
        case 2:
            
            ret=obj.Dequeue();
            if (ret!=-1)
            {
                cout<<"Poped element from queue: "<<ret<<"\n";
            }
            break;
        case 3:
            obj.Display();
            break;
        case 4:
            ret=obj.Count();
            cout<<"Number of elements in queue are: "<<ret<<"\n";
            break;
        case 0:
            cout<<"Thank you for using queue\n";
        default:
            cout<<"Enter valid option\n";
            break;
        }//end of switch
    }//end of while
    
    return 0;
}//end of main
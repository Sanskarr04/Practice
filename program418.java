//Singly Linear Linked List
import java.util.*;

class Node
{
    public int data;
    public Node next;

    public Node(int no)
    {
        this.data=no;
        this.next=null;
    }
}

class SinglyLL
{
    public Node first;
    public int icount;

    public SinglyLL()
    {
        this.first=null;
        this.icount=0;
    }
    public void Display()
    {
        Node temp=first;
        while(temp!=null)
        {
            System.out.print("|"+temp.data+"|->");
            temp=temp.next;
        }
        System.out.println("null");
    }

    public int count()
    {
        return this.icount;
    }

    public void InsertFirst(int no)
    {
        Node newn=new Node(no);
        if(first==null)
        {
            first=newn;
        }
        else
        {
            newn.next=first;
            first=newn;
        }
        icount++;
    }

    public void InsertLast(int no)
    {
        Node newn=new Node(no);
        if(first==null)
        {
            first=newn;
        }
        else
        {
            Node temp=first;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
            icount++;
        }
    }

    public void InsertAtPos(int no,int pos)
    {
        int isize=count();
        if(pos<1 || pos>isize+1)
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(pos==1)
        {
            InsertFirst(no);
        }
        else if(pos==isize+1)
        {
            InsertLast(no);
        }
        else
        {
            Node temp=first;
            Node newn=new Node(no);
            for(int i=1;i<pos-1;i++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            temp.next=newn;
            icount++;
        }
    }

    public void DeleteFirst()
    {
        if(first==null)
        {
            return;
        }
        if(first.next == null)
        {
            first=null;
        }
        else
        {
            first=first.next;
        }
        icount--;
    }

    public void DeleteLast()
    {
        if(first==null)
        {
            return;
        }
        if(first.next==null)
        {
            first=null;
        }
        else
        {
            Node temp=first;
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        icount--;
    }

    public void DelteAtPos(int pos)
    {
        int isize=count();
        if(pos<1 || pos>isize)
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(pos==1)
        {
            DeleteFirst();
        }
        else if(pos==isize)
        {
            DeleteLast();
        }
        else
        {
            Node temp=first;
            for(int i=1;i<pos-1;i++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            icount--;
        }
    }
}
class program418
{
    public static void main(String []args)
    {
        SinglyLL obj=new SinglyLL();
        obj.InsertFirst(51);
        obj.InsertFirst(50);
        obj.InsertFirst(49);
        obj.InsertLast(52);
        obj.InsertLast(53);
        obj.Display();

        System.out.println("Count is: "+obj.count());
        
        obj.DeleteFirst();
        obj.Display();
        obj.DeleteLast();
        obj.Display();
        obj.InsertAtPos(56, 3);
        obj.DelteAtPos(3);
        obj.Display();
    }
}
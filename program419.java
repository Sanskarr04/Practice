//Doubly Linear Linked List
import java.util.*;

class Node
{
    public int data;
    public Node next;
    public Node prev;

    public Node(int no)
    {
        this.data=no;
        this.next=null;
        this.prev=null;
    }
}

class DoublyLL
{
    public Node first;
    public int icount;

    public DoublyLL()
    {
        this.first=null;
        this.icount=0;
    }
    public void Display()
    {}

    public int count()
    {return 0;}

    public void InsertFirst(int no)
    {}

    public void InsertLast(int no)
    {}

    public void InsertAtPos(int no,int pos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DelteAtPos(int pos)
    {}

}
class program419
{
    public static void main(String []args)
    {
        DoublyLL obj=new DoublyLL();
    }
}
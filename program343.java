//approch 1
import java.util.Scanner;

class ArrayX
{
    public int Arr[];

    public ArrayX(int isize)
    {
        Arr =new int [isize];
    }

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter elements you want to store: ");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are: ");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
    }

    
}
class MyArray extends ArrayX
{
    public MyArray(int isize)
    {
        super(isize);
    }
    public int Summation()
    {
        int sum=0;
        for(int i=0;i<Arr.length;i++)
        {
            sum=sum+Arr[i];
        }
        return sum;
    }
}

class program343 {
    public static void main(String []args)
    {
        
        Scanner sobj =new Scanner(System.in);
        
        System.out.println("how many elements you want to store?");
        int isize=sobj.nextInt();
        
        MyArray mobj=new MyArray(isize);
        mobj.Accept();
        mobj.Display();
        int l=mobj.Summation();
        System.out.println("sum of elements in array is : "+l);
        // sobj.close();
    }
}

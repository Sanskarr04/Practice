import java.util.*;

//2d array

class Matrix
{
    public int Arr[][];
    public Matrix(int i, int j)
    {
        Arr=new int[i][j];
    }
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter elements");
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
        
    }
    public void Display()
    {
        System.out.println("Elements of Matrix are: ");
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

public class program374 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int row=0, col=0;
        System.out.println("Enter number of rows");
        row=sobj.nextInt();

        System.out.println("Enter number of coloumns");
        col=sobj.nextInt();

        Matrix mobj=new Matrix(row, col);
        mobj.Accept();
        mobj.Display();
    }
}

//Aproach 2
import java.util.*;

public class program329
{
    public static int Factorial(int ival)
    {
        int imult=1;
        for(int i=1;i<=ival;i++)
        {
            imult=imult*i;
        }
        return imult;
    }

    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();

        int iret=Factorial(ino1);
        System.out.println("Factorial is "+iret);
        
    }
}
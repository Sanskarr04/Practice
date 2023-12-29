//Aproach 3
import java.util.*;

class Numbers
{
    public int Factorial(int ival)
    {
        int imult=1;
        for(int i=1;i<=ival;i++)
        {
            imult=imult*i;
        }
        return imult;
    }
}

class program330
{    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers nobj=new Numbers();
        
        int iret=nobj.Factorial(ino1);
        System.out.println("Factorial is "+iret);
        
    }
}

import java.util.*;

class Numbers
{
    public int countDigit(int no)
    {
        int c=0;
        while(no!=0)
        {
            c++;
            no=no/10;
        }
        return c;
    }
}

class program334
{   
    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers obj=new Numbers();
        int iret=obj.countDigit(ino1);
        System.out.println("Factorial is "+iret);
        
    }
}
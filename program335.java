
import java.util.*;

class Numbers
{
    public int additionDigit(int no)
    {
        if(no<0)
        {
            no=-no;
        }
        int sum=0;
        while(no!=0)
        {
            sum=sum+(no%10);
            no=no/10;
        }
        return sum;
    }
}

class program335
{   
    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers obj=new Numbers();
        int iret=obj.additionDigit(ino1);
        System.out.println("Factorial is "+iret);
        
    }
}
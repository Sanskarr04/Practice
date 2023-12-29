
import java.util.*;

class Numbers
{
    public int genericRoot(int no)
    {
        int digit=0;
        int sum=0;
        
        while(no>=10)
        {
            while(no!=0)
            {
                digit=no%10;
                sum=sum+digit;
                no=no/10;
            }
            if(sum>=10)
            {
                no=sum;
                sum=0;
            }
            else 
            {
                no=sum;
                break;
            }
        }
        return no;
        //return 1+(no-1)%9;
    }
}

class program336
{   
    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers obj=new Numbers();
        int iret=obj.genericRoot(ino1);
        System.out.println("generic root is "+iret);
        
    }
}
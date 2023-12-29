
import java.util.*;

class Numbers
{
    int countDigit(int no)
    {
        int res=0;
        while (no!=0) 
        {
            res++;
            no=no/10;
        }
        return res;
    }

    int power(int x, int y)
    {
        int sum=1;
        for(int i=1;i<=y;i++)
        {
            sum=sum*x;
        }
        return sum;
    }
    public boolean checkAmstrongNum(int no)
    {
        int digit=0;
        int sum=0;
        int icount=countDigit(no);
        int temp=no;
        while(no!=0)
        {
            digit=no%10;
            sum=sum+power(digit,icount);
            no=no/10;
        }
        if(sum==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
//153,371,92727
class program338

{   
    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers obj=new Numbers();
        boolean iret=obj.checkAmstrongNum(ino1);
        if(iret==true)
        {

            System.out.println(iret+" is amstrong");
        }
        else
        {
            System.out.println(iret+" is not amstrong");
        }
    }
}
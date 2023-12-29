
import java.util.*;

class Numbers
{
    public boolean amstrongNum(int no)
    {
        int c=0;
        int temp=no;
        int d=0;
        int sum=0;
        
        while(temp!=0)
        {
            c++;
            temp=temp/10;
        }
        int pow=1;
        temp=no;
        while (no!=0) {
            d=no%10;
            for(int i=1;i<=c;i++)
            {
                pow=pow*d;
            }
            sum=sum+pow;
            pow=1;
            no=no/10;
        }
        System.out.println(sum);
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
class program337
{   
    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers obj=new Numbers();
        boolean iret=obj.amstrongNum(ino1);
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
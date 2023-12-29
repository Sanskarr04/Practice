
import java.util.*;

class Numbers
{
    public int factorial(int no)
    {
        int ans=1;
        for(int i=2;i<=no;i+=2)
        {
            if(no%i==0)
            {   
                ans*=i;
            }
        }
        if(ans==1)
        {
            return 0;
        }
            return ans;
        
    }
}

class program333
{   
    
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();
        Numbers obj=new Numbers();
        int iret=obj.factorial(ino1);
        System.out.println("Factorial is "+iret);
        
    }
}
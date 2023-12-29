
import java.util.*;

class Numbers
{
    public int factorial(int no)
    {
        int ans=1;
        for(int i=1;i<=no;i++)
        {
            if(no%i==0 && i%2==0)
            {   
                ans*=i;
            }
        }
        return ans;
    }
}

class program332
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
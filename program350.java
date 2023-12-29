import java.util.Scanner;

class StringX
{
    public int countSmall(String str)
    {
        int c=0;
        char [] arr=str.toCharArray();
        for(int i=0;i<arr.length;i++)
        {
            if(str.charAt(i)>='a' && str.charAt(i)<='z')
            {
                c++;
            }
        }
        return c;
    }
    public int countCapital(String str)
    {
        int c=0;
        char[] arr=str.toCharArray();
        for(int i=0;i<arr.length;i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                c++;
            }
        }
        return c;
    }

}

public class program350 {
    public static void main(String []args)
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name=sobj.nextLine();
        
        StringX obj=new StringX();
        System.out.println("number of small characters are: "+obj.countSmall(name));

        System.out.println("number of capital characters are: "+obj.countCapital(name));        
    }
}

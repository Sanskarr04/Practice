import java.util.Scanner;

class StringX
{
    public String convertToLower(String str)
    {
        char[ ]arr=str.toCharArray();
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>='A' && arr[i]<='Z')
            {
                arr[i]=(char)(arr[i]+32);
            }
        }
        
        String res=new String(arr);
        return res;
    }
    public String convertToUpper(String str)
    {
        char[ ]arr=str.toCharArray();
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            {
                arr[i]=(char)(arr[i]-32);
            }
        }
        
        String res=new String(arr);
        return res;
    }
    public String Toggle(String str)
    {
        char[ ]arr=str.toCharArray();
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            {
                arr[i]=(char)(arr[i]-32);
            }
            else if(arr[i]>='A' && arr[i]<='Z')
            {
                arr[i]=(char)(arr[i]+32);
            }
        }
        
        String res=new String(arr);
        return res;
    }
}

public class program351 {
    public static void main(String []args)
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name=sobj.nextLine();
        
        StringX obj=new StringX();
        String sret=obj.convertToLower(name);
        System.out.println("converted String is "+sret);

        System.out.println("converted to upper case "+obj.convertToUpper(name));
        System.out.println("Toggled: "+obj.Toggle(name));
    }
}

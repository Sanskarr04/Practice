import java.util.Scanner;
//remove whitespace from the String 
class StringX
{
    public String reverseString(String str)
    {
        char ch[]=str.toCharArray();
        char rev[]=new char[ch.length];
        int s=0;
        for(int i=ch.length-1;i>=0;i--)
        {
            rev[s++]=ch[i];
        }
        return new String(rev);
    }
    public String Reverse(String str)
    {
        char arr[]=str.toCharArray();

        int istart=0;
        int iend=arr.length-1;

        char ctemp=' ';

        while(istart<iend)
        {
            ctemp=arr[istart];
            arr[istart]=arr[iend];
            arr[iend]=ctemp;

            istart++;
            iend--;
        }
        return new String(arr);
    }

}

public class program356 {
    public static void main(String []args)
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name=sobj.nextLine();
        
        StringX obj=new StringX();
        // System.out.println("resulltant String is "+obj.removeWhiteSpcae(name));
        System.out.println(obj.reverseString(name));
    }
}

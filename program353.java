import java.util.Scanner;
//remove whitespace from the String 
class StringX
{
    // public String removeWhiteSpcae(String str)
    // {
    //     char []arr=str.toCharArray();
    //     String res="";
    //     for(int i=0;i<arr.length;i++)
    //     {
    //         if(arr[i]!=' ')
    //         {
    //             res+=arr[i];
    //         }
    //     }
    //     return res;
    // }
    public String removeWhitespc(String str)
    {
        char []arr=str.toCharArray();
        char[] brr=new char[arr.length];

        int i=0;
        for(int icnt=0;icnt<arr.length;icnt++)
        {
            if(arr[icnt]!=' ')
            {
                brr[i]=arr[icnt];
                i++;
            }
        }
        String r=new String(brr);
        System.out.println(r.length());
        return new String(brr);
    }


}

public class program353 {
    public static void main(String []args)
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name=sobj.nextLine();
        
        StringX obj=new StringX();
        // System.out.println("resulltant String is "+obj.removeWhiteSpcae(name));
        System.out.println(obj.removeWhitespc(name));
    }
}

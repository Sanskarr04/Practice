import java.util.Scanner;
//remove whitespace from the String 
class StringX
{
    public String removeWhitespc(String str)
    {
        char []arr=str.toCharArray();
        String output="";
        for(int icnt=0;icnt<arr.length;icnt++)
        {
            if(arr[icnt]!=' ')
            {
                output=output+arr[icnt];
            }
        }
        return output;
    }


}

public class program354 {
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

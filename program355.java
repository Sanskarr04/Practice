import java.util.Scanner;
//remove whitespace from the String 
class StringX
{
    public String removeWhitespc(String str)
    {
        return str.replaceAll("[ ]","");
    }


}

public class program355 {
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

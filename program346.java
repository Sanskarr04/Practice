
import java.util.Scanner;

class program346 {
    public static void main(String []args)
    {

        Scanner sobj =new Scanner(System.in);
        
        System.out.println("Enter your name: ");
        String name=sobj.nextLine();
        System.out.println("Length of String is : "+name.length());

        for(int i=0;i<name.length();i++)
        {
            System.out.println(name.charAt(i));
        }
    }
}

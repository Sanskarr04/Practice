//Aproach 1
import java.util.*;

public class program328
{

    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number: ");
        int ino1=sobj.nextInt();

        int imult=1;
        for(int i=1;i<=ino1;i++)
        {
            imult=imult*i;
        }
        System.out.println("Factorial is "+imult);
        int ians=0;
    }
}
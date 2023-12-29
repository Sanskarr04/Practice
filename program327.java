import java.util.*;

public class program327
{
    public static void main(String[] args)
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter first number: ");
        int ino1=sobj.nextInt();

        System.out.println("Enter seccond number: ");
        int ino2=sobj.nextInt();

        int ians=0;
        ians=ino1+ino2;
        System.out.println("addition is : "+ians);
       
        sobj.close();//for closing the object

    }
}
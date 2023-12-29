import java.util.*;

//count how many times word occurse in string

public class program365 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();
        StringBuffer sob=new StringBuffer(str);
        sob=sob.reverse();
        System.out.println(sob);

    }
}

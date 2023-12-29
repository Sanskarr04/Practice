import java.util.*;

//remove extra white spaces between the words

public class program360 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        System.out.println("updated:"+str);
    }
}

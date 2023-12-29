import java.util.*;

//count how many times word occurse in string

public class program367 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        String[]s=str.split(" ");
        StringBuffer res=new StringBuffer();
        for(String t:s)
        {
            StringBuffer sbr=new StringBuffer(t);
            res.append(sbr.reverse()).append(" ");
        }
        System.out.println(res.toString().trim());
    }
}

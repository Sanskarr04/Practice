import java.util.*;

//count how many times word occurse in string

public class program366 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        String[]s=str.split(" ");
        String res="";
        for(int i=0;i<s.length;i++)
        {
            StringBuffer sbr=new StringBuffer(s[i]);
            res+=sbr.reverse();
            res+=" ";
        }
        System.out.println(res.trim());
    }
}

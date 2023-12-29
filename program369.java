import java.util.*;

//

public class program369 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        String[]s=str.split(" ");
        StringBuffer res=new StringBuffer();
        for(int i=s.length-1;i>=0;i--)
        {
            res.append(s[i]).append(" ");
        }
        System.out.println(res.toString().trim());
    }
}

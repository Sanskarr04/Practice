import java.util.*;

//remove extra white spaces between the words

public class program361 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        if(str.isEmpty())
        {
            System.out.println("no words");
            return;
        }
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        int c=0;
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)==' ')
            {
                c++;
            }
        }
        System.out.println("Number of wors are :"+(c+1));
    }
}

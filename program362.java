import java.util.*;

//remove extra white spaces between the words

public class program362 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        
        String arr[]=str.split(" ");
        for(String s:arr)
        {
            System.out.println(s);
        }
        System.out.println("Number of words are: "+arr.length);
        
       
    }
}

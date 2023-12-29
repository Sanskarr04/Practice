import java.util.*;

//count how many times word occurse in string

public class program363 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        int c=0;
        String arr[]=str.split(" ");
        System.out.println("Enter a word you want to count in Sentence");
        String find=sobj.nextLine();
        for(String s:arr)
        {
            if(s.equals(find))
            {
                c++;
            }
        }
        System.out.println("result "+c);
        
       
    }
}

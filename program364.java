import java.util.*;

//count how many times word occurse in string

public class program364 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        str=str.trim();
        str=str.replaceAll("\\s+", " ");
        int c=0;
        String arr[]=str.split(" ");
        int max=0;
        int pos=0;
        for(String s:arr)
        {
            if(s.length()>max)
            {
                max=s.length();
                pos=c;
            }
            c++;
        }

        System.out.println("Largest word from string is :"+arr[pos]+" having length is "+max);
       
    }
}

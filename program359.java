import java.util.*;

//count frequency of characters from the string

public class program359 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        str=str.toLowerCase();
        str=str.replaceAll("\\s", "");
        char arr[]=str.toCharArray();
        int freq[]=new int[26];

        for(char ch:arr)
        {
            freq[ch-'a']++;
        }

        System.out.println("Frequncy of each letter");
        for(int i=0;i<freq.length;i++)
        {
            if(freq[i]!=0)
            {
                System.out.println("Frequency of "+(char)(i+'a') + " is "+ freq[i]);
            }
        }
    }
}

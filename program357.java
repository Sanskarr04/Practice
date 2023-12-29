import java.util.*;

//count frequency of characters from the string

public class program357 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String: ");
        String str=sobj.nextLine();
        str=str.toLowerCase();

        char arr[]=str.toCharArray();
        int freq[]=new int[26];

        for(int i=0;i<arr.length;i++)
        {
            freq[arr[i]-'a']++;
        }

        System.out.println("Frequncy of each letter");
        for(int i=0;i<freq.length;i++)
        {
            System.out.println("Frequency of "+(char)(i+'a') + "is "+ freq[i]);
        }
    }
}

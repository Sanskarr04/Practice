import java.util.*;

//Anagram

public class program370 {
    
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first string");
        String str1=sobj.nextLine();
        System.out.println("Enter seccond String");
        String str2=sobj.nextLine();
        str1=str1.toLowerCase();
        str2=str2.toLowerCase();
        
        char arr[]=str1.toCharArray();
        char brr[]=str2.toCharArray();
        
        int freq1[]=new int[26];
        int freq2[]=new int[26];

        for(int i=0;i<arr.length;i++)
        {
            freq1[arr[i]-'a']++;
        }
        
        for(int i=0;i<brr.length;i++)
        {
            freq1[brr[i]-'a']++;
        }
        
        int k=0;
        for(k=0;k<arr.length;k++)
        {
            if(arr[k]!=brr[k])
            {
                
                break;
            }
        }
        if(k==arr.length)
        {
            System.out.println("it is anagram");
        }
        else
        {
            System.out.println("it is not anagram");
        }
    }
}

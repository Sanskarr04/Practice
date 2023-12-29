//approch 1
import java.util.Scanner;



public class program340 {
    public static void main(String []args)
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("how many elements you want to store?");
        int count=sobj.nextInt();
        int []arr=new int[count];
        System.out.println("Enter elements you want to store");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.nextInt();
        }

        System.out.println("Elements of array");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }


    }
}

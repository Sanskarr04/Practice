import java.io.File;
import java.io.FileWriter;
import java.util.Scanner;

class program457
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter file name");
        String s=sc.next();
        // File creatFile=new File(s);
        
        try{            
            FileWriter w=new FileWriter(s);
            w.write("Hello ladies and ledas");
            w.close();
            System.out.println("wrote successfully");
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}
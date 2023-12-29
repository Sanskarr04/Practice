import java.io.File;
import java.util.Scanner;

class program456
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter file name");
        String s=sc.next();
        File creatFile=new File(s);
        try{
            // if(creatFile.createNewFile())
            // {
            //     System.out.println("file created successfully");
            // }
            // else
            // {
            //     System.out.println("File not created");
            // }
            // System.out.println(((int)creatFile.getTotalSpace()));
            if(creatFile.mkdirs())
            {
                System.out.println("created folder");
            }
            else{
                System.out.println("not created");
            }
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}
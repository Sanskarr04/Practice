import java.io.File;
import java.util.Scanner;

class program459
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter address + Folder name");
        String s=sc.next();
        File creatFile=new File(s);
        try{
            if(creatFile.mkdirs())
            {
                System.out.println("Folder created");
            }
            else{
                System.out.println("Failed to create");
            }
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
        sc.close();
    }
}
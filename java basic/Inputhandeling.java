import java.io.FileInputStream;

public class Inputhandeling {
    public static void main(String [] arg)throws Exception{
        FileInputStream fin=new FileInputStream("hello.txt");
        int a1=fin.read(null);
        int a2=fin.read(null);
        int a3=fin.read(null);
        int a4=fin.read(null);
        System.out.println("Value of a1: " + a1);
        System.out.println("Value of a2: " + a2);
        System.out.println("Value of a3: " + a3);
        System.out.println("Value of a4: " + a4);
        fin.skip(12);
        byte[] b=new byte[3];
        fin.read(b);
        int a5=fin.available();
        System.out.println("Available bytes after reading: " + a5);
        fin.close();


    }
}

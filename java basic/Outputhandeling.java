import java.io.*;

public class Outputhandeling {
    public static void main(String[] aa) throws Exception{
        FileOutputStream fout=new FileOutputStream("aa1.txt");
        fout. write(65); 
        fout. write(66); 
        fout. write(67); 
        fout. write(68);
        byte[] b={97,98,99,100,101,102,103, 104};
        fout. write(b); 
        fout.write(b,2,4);
        fout.close();
    }
}

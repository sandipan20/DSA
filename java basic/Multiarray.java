import java.util.Scanner;

public class Multiarray{
    public static void main(String [] arg){
        Scanner sc =new Scanner(System.in);
        int[][] x=new int[3][];
        x[0]=new int[3];
        x[1]=new int[2];
        x[2]=new int[4];
        for(int i=0;i<x.length;i++){
            for(int j=0;j<x[i].length;j++){
                x[i][j]=sc.nextInt();
            }
        }
        sc.close();
        for(int i=0;i<x.length;i++){
            for(int j=0;j<x[i].length;j++){
                System.out.print(" "+x[i][j]);
            }
            System.out.println();
        }
    }
}
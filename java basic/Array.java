import java.util.Scanner;

public class Array {
    public static void main(String [] arg){
        int[] arr=new int[10];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<10;i++){
            arr[i]=sc.nextInt();
        }
        sc.close();
        for(int i=0;i<10;i++){
            System.out.print(" "+arr[i]);
        }
    }
}

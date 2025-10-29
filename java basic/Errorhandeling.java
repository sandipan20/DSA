import java.util.InputMismatchException;
import java.util.Scanner;

public class Errorhandeling {
    public static void main (String [] arg){
        int[] arr={21,5,67,9,90,45,23};
        int idx,a,ans=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the index and value");
        try{
            idx=sc.nextInt();
            a=sc.nextInt();
            ans=arr[idx]/a;
        } catch(InputMismatchException e){
            System.out.println("exception thrown is :"+" "+e);
        } catch(ArrayIndexOutOfBoundsException e){
            System.out.println("exception thrown is :"+" "+e);
        } catch(ArithmeticException e){
            System.out.println("exception thrown is :"+" "+e);
        }
        finally{
            sc.close();
            System.out.println("this is fanally block");
        }
        System.out.println("ans = "+ans);
    }
}

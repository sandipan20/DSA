import java.util.Scanner;

public class Switch_case{
    public static void main(String [] arg){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no od daya in week");
        int s1=sc.nextInt();
        switch(s1){
            case 1:
            System.out.println("sunday");
            break;
            case 2:
            System.out.println("monday");
            break;
            default :
            System.out.println("invalid day");
        }
        sc.close();

    }
}
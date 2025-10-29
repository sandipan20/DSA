@FunctionalInterface
interface Calculator{
    int sum(int a,int b);
}
public class Lambdaexp {
    public static void main(String []arg){
        Calculator c=(a,b)-> a+b;
        System.out.println(c.sum(45, 67));
    }
}

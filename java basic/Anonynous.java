interface A{
    void f1();
}
public class Anonynous{
    public static void main(String []arg){
        new A() {
            public void f1(){

            }
        }.f1();
    }
}
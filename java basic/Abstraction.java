abstract class A{
    abstract void f();
    void fun(){
        System.out.println("hello ");
    }
}
interface B{
    void r1();
    void r2();
}
class C extends A{
    void f(){
        System.out.print("defined in c");
    }
}
class D implements B{
    public void r1(){}
    public void r2(){}
}

public class Abstraction{
    public static void main(String [] arg){
        
    }
}
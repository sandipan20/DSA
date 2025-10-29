class Person {
    // Person(){
    //     System.out.println(" person counstructor executed");
    // }
    String name;
    void f1(){
        System.out.println("in person f1");
    }
    void f2(){
        System.out.println("in person f2");
    }
}

class Student extends Person{
    // Student(){
    //     System.out.println("student constructor executed");
    // }
    String course;
    void f3(){
        System.out.println("in student f3");
    }
    void f2(){
        System.out.println("in student f2");
    }
}
public class Inheritance{
    public static void main (String [] arg ){
        Student s1=new Student();
        s1.name="ram";
        s1.course="B.tech";
        System.out.println(s1.course);
        System.out.println(s1.name);
        Person P=s1;
        // System.out.println(P.course);// this will give error bcz course doesnt belong to the person
        System.out.println(P.name);
        s1.f1();
        s1.f2();
        s1.f3();
        P.f1();
        P.f2();
    }
}

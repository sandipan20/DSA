class Mythread extends Thread {
    public void run(){
        for(int i=1;i<5;i++){
            System.out.println("Thread "+Thread.currentThread().getName()+" count "+i);
            try{
                Thread.sleep(1000);
            } catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}
public class Threading{
    public static void main(String [] arg){
        Mythread t1=new Mythread();
        Mythread t2 =new Mythread();
        t1.setName("A");
        t2.setName("B");
        t1.start();
        t2.start();
    }
}
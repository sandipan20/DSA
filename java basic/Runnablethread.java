class T implements Runnable{
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
public class Runnablethread {
    public static void main (String [] arg){
        Thread t1=new Thread(new T());
        Thread t2=new Thread(new T());
        t1.setName("A");
        t2.setName("B");
        t1.start();
        t2.start();
    }
}

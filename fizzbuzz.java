public class fizzbuzz {
    public static void main(String []args) throws InterruptedException{
        int n=20;
        for(int i=1;i<=n;i++){
            if(i%15==0){
                thread3 t=new thread3();
                t.start();
                t.join();
            }else{
                if(i%3==0){
                thread2 t=new thread2();
                t.start();
                t.join();
                }
                else{
                    if(i%5==0){
                        thread1 t=new thread1();
                        t.start();
                        t.join();
                    }
                    else{
                        System.out.println(i);
                    }
                }
            }
        }
    }
}
class thread1 extends Thread{
    public void run(){
    System.out.println("Fizz");
    }
}
class thread2 extends Thread{
    public void run(){
    System.out.println("Buzz");
    }
}
class thread3 extends Thread{
    public void run(){
    System.out.println("FizzBuzz");
    }
}

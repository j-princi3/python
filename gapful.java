import java.util.Scanner;
public class gapful {
    public static void main(String []args){
        try (Scanner sc = new Scanner (System.in)) {
            int num=sc.nextInt();
            int x=num;
            int tence=0,once=num%10;
            while(x>9){
                x=x/10;
            }
            tence=x*10+once;
            if(num%tence==0){
                System.out.print(1);
            }else{
                System.out.print(0);
            }
        }
    }
}

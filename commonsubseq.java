import java.util.Scanner;
public class commonsubseq {
    public static void main(String []args){
        try (Scanner sc = new Scanner (System.in)) {
            String s1=sc.next();
            String s2=sc.next();
            int i=0;
            int ct=0;
            int m=0;
            while(i<s1.length()){
                for(int j=m;j<s2.length();j++){
                    if(s1.charAt(i)==s2.charAt(j)){
                        ct++;
                        m=j+1;
                        break;
                    }
                }
                i++;
            }
            System.out.print(ct);
        }
    }
}

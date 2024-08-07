import java.util.Scanner;

public class mergestring {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s1 = sc.next();
            String s2 = sc.next();
            int i = 0;
            String s = "";
            while (i < s1.length()) {
                s = s + s1.charAt(i);
                if (i < s2.length()) {
                    s = s + s2.charAt(i);
                }
                i++;
            }
            i++;
            if (i < s2.length()) {
                s = s + s2.substring(i);
            }
            if (i < s1.length()) {
                s = s + s1.substring(i);
            }
            System.out.println(s);

        }
    }
}

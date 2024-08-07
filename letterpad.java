import java.util.Scanner;

public class letterpad {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String j = sc.next();
            String s = "";
            for (int i = 0; i < j.length(); i++) {
                switch (j.charAt(i)) {
                    case 'a':
                    case 'b':
                    case 'c':
                        s = s + "2";
                        break;
                    case 'd':
                    case 'e':
                    case 'f':
                        s = s + "3";
                        break;
                    case 'i':
                    case 'g':
                    case 'h':
                        s = s + "4";
                        break;
                    case 'j':
                    case 'k':
                    case 'l':
                        s = s + "5";
                        break;
                    case 'm':
                    case 'n':
                    case 'o':
                        s = s + "6";
                        break;
                    case 'p':
                    case 'q':
                    case 'r':
                    case 's':
                        s = s + "7";
                        break;
                    case 'u':
                    case 'v':
                    case 't':
                        s = s + "8";
                        break;
                    case 'w':
                    case 'x':
                    case 'y':
                    case 'z':
                        s = s + "9";
                        break;
                    default:
                        System.exit(i);
                }
            }
            System.out.print(s);
        }
    }
}

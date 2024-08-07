import java.util.Scanner;

class numbercheck {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int i = sc.nextInt();
            for (int i1 = 1; i1 <= i; i1++) {
                for (int i2 = 1; i2 <= i1; i2++) {
                    if ((i2 + 1) * i2 == i1) {
                        System.out.println(i1);
                    }
                }
            }
        }
        return;
    }
}
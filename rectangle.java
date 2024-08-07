import java.util.Scanner;

public class rectangle {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int arr[][] = new int[n][n];
            int r = 0;
            int c = 0;
            int endcycle = 0;
            int rightend = n - 1;
            int pr = 0;
            while (pr <= n * n) {
                while (c <= rightend && pr <= n * n) {
                    pr++;
                    arr[r][c] = pr;
                    c++;
                }
                r++;
                c--;
                while (r <= rightend && pr <= n * n) {
                    pr++;
                    arr[r][c] = pr;
                    r++;
                }
                c--;
                r--;
                while (c >= endcycle && pr <= n * n) {
                    pr++;
                    arr[r][c] = pr;
                    c--;
                }
                c++;
                r--;
                endcycle++;
                rightend--;
                while (r >= endcycle && pr <= n * n) {
                    pr++;
                    arr[r][c] = pr;
                    
                    r--;
                }
                r++;
                c++;
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    System.out.print(arr[i][j]+" ");
                }
                System.out.println();
            }
        }

    }
}

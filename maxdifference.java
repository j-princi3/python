import java.util.Scanner;

class maxdifference{
    public static void main(String [] args){
        try (Scanner sc = new Scanner(System.in)) {
            int n=sc.nextInt();
            int arr[]=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int diff=0;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(diff<Math.abs(arr[i]-arr[j])){
                        diff=Math.abs(arr[i]-arr[j]);
                    }
                }
            }
            System.out.print(diff);
        }
    }
}
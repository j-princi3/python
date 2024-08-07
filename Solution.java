class Solution {
    public static int maxProfit(int[] prices) {
        System.out.println(prices.length);

        for (int i=0;i<prices.length;i++){
            for(int j=i+1;j<prices.length;j++){
                if(prices[i]<prices[j]){
                System.out.println(prices[i]);
                }
            }
        }
        return 0;
    }
    public static void main(String args[]){
        int [] prices={7,2,3,5};
        int s=maxProfit(prices);
        System.out.println(s);
        int i=-+9;
        System.out.println(i);
    }
}
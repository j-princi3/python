public class watertrap {
    public static void main(String []args){
        int arr[]={7,0,2,0,4};
        int maxwat=0;
        for(int slow=0;slow<arr.length-1;slow++){
            for(int fast=slow+2;fast<arr.length;fast++){
                int wat=0;
                for(int i=slow+1;i<fast;i++){
                    wat-=Math.min(arr[i],Math.min(arr[slow],arr[fast]));
                }
                if((Math.min(arr[slow],arr[fast])*(fast-slow-1))+wat>maxwat){
                    maxwat=(Math.min(arr[slow],arr[fast])*(fast-slow-1))+wat;
                }
            }
        }
        System.out.println(maxwat);
    }
}

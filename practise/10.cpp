#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of elements:";
    cin>>n;
    int mat[n];
    cout<<"Array elements:"<<endl;
    for (int i=0;i<n;i++){
        int num;
        cin>>num;
        mat[i]=num;
    }
    int max=0;
    for (int j=0;j<n-1;j++){
        for (int k=n-1;k>=j;k--){
            int arr[k-j+1];
            int i=0;
            for (int m=j;m<=k;m++){
                arr[i]=mat[m];
                i++;
            }
            int diff;
            int flag=1;
            for (int n=0;n<k-j;n++){
                diff=arr[1]-arr[0];
                if (diff!=arr[n+1]-arr[n]){
                    flag=0;
                    break;
                }
            }
            if (flag==1){
                if (max<sizeof(arr)/sizeof(arr[0])){
                    max=sizeof(arr)/sizeof(arr[0])-1;
                }
            }
        }
    }
    cout<<"longest arithmetic subarray length:"<<max;
    return 0;
}
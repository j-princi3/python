#include <iostream>
using namespace std;
bool search(int arr[],int num,int size){
    int left=0,right=size;
    int mid=(left+right)/2;
    while(left<right){
        if(arr[mid]==num){
            cout<<mid;
            return true;
        }
        else{
            if(arr[mid]<num){
                left=mid;
            }
            else{
                right=mid;
            }
            mid=(left+right)/2;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};

    cout<< search(arr,6,9);
    return 0;
}
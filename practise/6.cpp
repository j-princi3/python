#include <iostream>
using namespace std;

int main(){
    for (int i=3;i<=1000;i++){
        int flag=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag+=1;
                break;
            }
        }
        if (flag==0){
            int rev=0;
            int num=i;
            while (num>0){
                int r=num%10;
                rev =rev*10+r;
                num=num/10;
            }
            if (i==rev){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
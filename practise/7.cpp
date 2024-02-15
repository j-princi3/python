// automorphic number-5*5 =25   6*6=36  25*25=625

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int pro=num*num;
    int num1=num;
    
    int rev=0;
    while (num>0){
        int r=pro%10;
        rev=rev*10+r;
        pro/=10;
        num/=10;
        

        }
        
    int s=0;
    while(rev>0){
        int r=rev%10;
        s=s*10+r;
        rev/=10;
    }
    cout<<num1*num1;
    
    if (s==num1){
        cout<<"automorphic number";
    }
    else{
        cout<<"not an automorphic number";
    }
    
    return 0;
}
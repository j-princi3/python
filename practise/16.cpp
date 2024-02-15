#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i=1;i<=t;i++){
        int a1=0,b1=0;
        int N;
        string A;
        string B;
        cin>>N;
        cin>>A;
        cin>>B;
        
        for (int j=0;j<N;j++){
            if (A[j]=='R'){
                if (B[j]=='P'){
                    b1++;
                }
                else{
                    if (B[j]=='S'){
                        a1++;
                    }
                }
            }
                if(A[j]=='S'){
                    if (B[j]=='R'){
                        b1++;
                    }
                    else{
                        if (B[j]=='P'){
                            a1++;
                        }
                    }
                }
                if(A[j]=='P'){
                    if(B[j]=='R'){
                        a1++;
                    }
                    else{
                        if(B[j]=='S'){
                            b1++;
                        }
                    }
                }
        }
    
    if (a1>=b1 && a1+b1==N){
        cout<<0<<endl;
    }
    else {
        if (a1==b1 && a1+b1!=N){
        cout<<1<<endl;
    }
    else{
        if(a1<b1&& a1+b1==N){
            cout<<b1-a1<<endl;
        }
        else{
            if(a1<b1&& a1+b1!=N){
                cout<<b1-a1+1<<endl;
            }
        }

    }
    }
    }
	// your code goes here
	return 0;
}

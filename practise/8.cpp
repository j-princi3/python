// circular prime is 1193 (since 1931,9311 and 3119 are also prime )
#include <iostream>
using namespace std;

int main(){
    cout<<"hello world";
    int i1,i2;
    char symbol;
    cin>>i1;
    cin>>i2;
    cin>>symbol;
    switch(symbol){
        case '+':
            cout<<i1+i2;
            break;
        case '-':
            cout<<i1-i2;
            break;
        case '/':
            cout<<i1/i2;
            break;
        case '%':
            cout<<i1%i2;
            break;

    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string s="PAYPALISHIRING";
    string s1="";
    int num=3;
    for (int i=0;i<s.length();i++){
        s1=s1+s[num*2-2+1];
    }
    cout<<s1;
    return 0;
}
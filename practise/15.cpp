// aabbbbcccddddd
// output abcd

 
#include <iostream>
#include<string>
using namespace std;
string k="";
string duplicate(string s,int n){
    if (s[0]!=s[1]){
        k=k+s[0];
    }
    if (n==2){
        if (k[k.length()-1]!=s[1]){
            k=k+s[1];
        }
        return k;
    }
    return duplicate(s.substr(1),n-1);
}
int main(){
    string s;
    cin>>s;
    cout<<duplicate(s,s.length());
    return 0;
}
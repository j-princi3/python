#include <iostream>
#include <string>
using namespace std;


void change(string s,string k){
    if (s.length()==0){
        cout<<k;
        return ;
    }
    if (s[0]=='o' && s[1]=='o'){
        s=s.replace(0,2,"kmit");
        k=k+s.substr(0,4);
        change(s.substr(4),k);
    }
    else{
        k=k+s[0];
        
        change(s.substr(1),k);
        
    }
    
    
}

int main(){
    string kmit="kmit";
    string s,k="";
    cin>>s;
    change(s,k);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void reversing(string s){
    if (s.length()==0){
        return ;
    }
    reversing(s.substr(1));
    char d= s[0];
    cout<<d;
}
int main(){
    string s="princi jain";
    int size =s.length();
    // cout<<s.substr(1,3);
    reversing(s);
    return 0;
}
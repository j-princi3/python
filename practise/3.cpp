// # include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     string s=to_string(x);
//     cout<<s;
//     string rev="";
//     int length=0;
//     while (s[length]!='\0'){
//         length++;
//     }
//     while (length>=0){
//         rev+=s[length];
//         length--;
//     }
//     if (rev==s){
//             // return true;
//         cout<<"true";
//     }
//     else{
//         cout<<"false"<<endl;
//         cout<<rev;
//             // return false;
//     }
// }
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> strs;
    if (strs.size()==0){
    cout<<"";
        }
    else{
    string one=strs[0];
    for (int i=1;i<strs.size();i++){
        for (int j =0;i < strs[i].size();j++ ){
            cout<<strs[i][j];
            }
        }
}
}

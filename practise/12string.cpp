#include <iostream>
#include <string>

using namespace std;


// void isSort(int mat[],int size){
//     if (n-1==size){
//         return mat[n-1];
//     }
//     isSort(mat[n-1],size-1)
// }
// int main(){
//     string s="";
//     string s1;
//     string s2="hello";
//     cout<<s.length()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s1.length()<<endl;
//     cout<<s1.size()<<endl;
//     cout<<s2.length()<<endl;
//     cout<<s2.size()<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    string h="hello ,today is tuesday.";
    

    for (int i=0;i<h.length();i++){
        if (int(h[i])>=97 && int(h[i])<=122){
            h[i]=char(int(h[i])-32);
        }
    }
    cout<<h;

    return 0;
}
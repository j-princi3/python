// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i =1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         for (int k=1;k<=(2*n)-(2*i);k++){
//             cout<<"  ";
//         }
//         for (int q=1;q<=i;q++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for (int i =n;i>=1;i--){
//         for (int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         for (int k=1;k<=(2*n)-(2*i);k++){
//             cout<<"  ";
//         }
//         for (int q=1;q<=i;q++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mat[n];
    for (int i=0;i<n;i++){
        int s;
        cin>>s;
        mat[i]=s;
    }
    int max=mat[0];
    for (int j =0;j<n;j++){
        if (max<=mat[j]){
            max=mat[j];
            cout<<mat[j];
        }
        else{
            cout<<max;
        }
    }
    return 0;
}
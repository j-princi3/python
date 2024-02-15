// #include <iostream>
// #include <vector>
// using namespace std;

// int arr(int m,int n){
//     int mat[m][n];
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             int s;
//             cin>>s;
//             mat[i][j]=s;
//         }
//     }
//     return mat;

// }
// int main(){
//     int m,n,p;
//     cin>>m>>n>>p;
//     // int mat1[m][n],mat2[n][p],prod[m][p];
//     // vector<vector<int>> mat1(m, vector<int>(n));
//     // vector<vector<int>> mat2(n, vector<int>(p));
//     vector<vector<int>> prod(m, vector<int>(p));
//     int mat1=arr(m,n);
//     int mat2=arr(n,p);
//     for (int i=0;i<m;i++){
//         for (int j=0;j<p;j++){
//             prod[i][j]=0;
//             for (int k=0;k<n;k++){
//                     prod[i][j]=mat1[i][k]* mat2[k][j]+prod[i][j];
//             }
//         }
//     }
//     return 0;
// }
// int display(int m,int n,int mat){
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
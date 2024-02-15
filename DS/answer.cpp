/*
Write a C++ program to check whether array is sorted or not.
HINT:Initialize array with {1,6,3,4,5} and check whether an array is 
sorted or not, return 1 if sorted else 0. 

SAMPLE OUTPUT:0

*/
// #include <iostream>
// using namespace std;

// bool isSorted(int mat[], int n){
//     if (n==1){
//         return true ;
//     }
//     bool value=isSorted(mat+1,n-1);
//     return (mat[0]<mat[1] )&& value;

// }
// int main(){
//     int mat[]={-1,1,3,4,5,6,7,8,10,-1};
//     cout<<isSorted(mat,sizeof(mat)/sizeof(mat[0]));
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------
/*
Write a C++ Program to print numbers in 
increasing and decreasing order using recursion
Hint: give the value of n

sample input-output:
enter the value of n:5                                                                                                  
Decreasing order:                                                                                                       
5                                                                                                                       
4                                                                                                                       
3                                                                                                                       
2                                                                                                                       
1                                                                                                                       
Increasing order:                                                                                                       
1                                                                                                                       
2                                                                                                                       
3                                                                                                                       
4                                                                                                                       
5                                                                                                                      

*/
// #include <iostream>
// using namespace std;
// void orders(int s){
//     if (s==0){
//         cout<<"Increasing order:"<<endl;
//         return;
//     }
//     cout<<s<<endl;
//     orders(s-1);
//     cout<<s<<endl;
// }
// int main(){
//     int s;
//     cout<<"enter the value of n:";
//     cin>>s;
//     cout<<"Decreasing order:"<<endl;
//     orders(s);
//     return 0;
// }

//----------------------------------------------------------------------------------------------


/*
Write a CPP Program to perferm sum till n numbers using recursion

Sample Input-Output:
enter n:                                                                                                                
4                                                                                                                       
sum is:10

*/
// #include <iostream>
// using namespace std;
// void sum(int n,int s){
//     if (n==0){
//         cout<<s;
//         return ;
//     }
//     sum(n-1,s+n);
// }
// int main(){
//     int n;
//     cout<<"enter n:"<<endl;
//     cin>>n;
//     int s=0;
//     sum(n,s);
//     return 0;
// }

// --------------------------------------------------------------------
/* 
Write a CPP program to find the 
first occurrence and last occurrence of an array using recursion

Hint:

take array as {4,2,1,2,2,7} print the first and last ocurrence of 2

Sample Output:

first occurrence is                                                                                                     
1                                                                                                                       
last occurrence is                                                                                                      
4                                                                                                                       
 
*/

#include <iostream>
using namespace std;
int flag=0;
void occurence(int mat[],int occ,int k){
    if (mat[0]==occ){
        cout<<"first occurrence is"<<endl;
        cout<<k+1<<endl;
        return;
    }
    occurence(mat+1,occ,k+1);

}
void back_occurence(int mat[],int occ,int n,int s ){
    
    if (n==0){
        return;
    }
    back_occurence(mat+1,occ,n-1,s);
    if (mat[0]==occ && flag==0){
        cout<<"last occurrence is"<<endl;
        cout<<s-n<<endl;
        flag=1;
        return;
    }
}


int main(){
    int mat[]={2,4,2,1,2,2,7,2};
    int k=-1;
    int s=sizeof(mat)/sizeof(mat[0]);
    occurence(mat,2,k);
    // cout<<"ll";
    back_occurence(mat,2,s,s);
}
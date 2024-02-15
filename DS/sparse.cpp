#include <iostream>
using namespace std;
int sizing(int arr[5][7]){
    int nonzero=0;
    for (int i=0;i<=4;i++){
        for (int j=0;j<=6;j++){
            if (arr[i][j]!=0){
                nonzero++;
            }
        }
    }
    return nonzero;
}
int main(){
    int arr[5][7] = {
    {0, 0, 0, 3, 0, 0, 4},
    {0, 5, 0, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 4, 0},
    {4, 0, 0, 0, 0, 0, 1},
    {0, 2, 0, 0, 3, 0, 0}
};

    int size=sizing(arr);
    int sparse[3][size];
    int col=0;
    for (int i=0;i<=4;i++){
        for (int j=0;j<=6;j++){
            if (arr[i][j]!=0){
                sparse[0][col]=i;
                sparse[1][col]=j;
                sparse[2][col]=arr[i][j];
                col++;
            }
        }
    }
    for (int i=0;i<=2;i++){
        for (int j=0;j<=size-1;j++){
            cout<<sparse[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
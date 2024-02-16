#include <iostream>
using namespace std;
class binaryTree{
    public:
    int arr[5];
    int top=0;
    binaryTree(int d){
        arr[0]=d;
    }
    void setLeft(int element,int rootindex){
        arr[2*rootindex+1]=element;
        top++;
    }
    void setRight(int element,int rootindex){
        arr[2*rootindex+2]=element;
        top++;
    }
    void print(){
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int getParent(int childIndex){
        return (childIndex-1)/2;
    }
    void insertmaxHeap(int m){
        top++;
        arr[top]=m;
        int i=top;
        while(i>0 && arr[getParent(i)]<arr[i]){
            int swap=arr[i];
            arr[i]=arr[getParent(i)];
            arr[getParent(i)]=swap;
            i=getParent(i);
        }
    }
    void insertminHeap(int m){
        top++;
        arr[top]=m;
        int i=top;
        while(i>0 && arr[getParent(i)]>arr[i]){
            int swap=arr[i];
            arr[i]=arr[getParent(i)];
            arr[getParent(i)]=swap;
            i=getParent(i);
        }
    }
};
int main(){
    binaryTree *b=new binaryTree(45);
    b->setLeft(35,0);
    b->setRight(20,0);
    b->setLeft(20,1);
    b->setRight(14,1);
    b->setLeft(12,2);
    b->print();
    // b->insertmaxHeap(81);
    // b->insertmaxHeap(108);
    // b->insertmaxHeap(18);
    // b->insertminHeap(1);
    b->print();
}




// ----------------------------------
// #include<iostream>
// using namespace std;
// class BinaryTree{
// public:
//     int a[100];
//     int top;
//     BinaryTree(int root){
//         a[0]=root;
//         top=1;
//     }
//     void setLeft(int rootIndex, int element){
//         a[(2*rootIndex)+1]=element;
//         top+=1;
//     }
//     void setRight(int rootIndex, int element){
//         a[(2*rootIndex)+2]=element;
//         top+=1;
//     }
//     int size(){
//         return top;
//     }
//     int getParentIndex(int childIndex){
//         return (childIndex-1)/2;
//     }
//     void insert(int element){
//         int i = top;
//         a[i] = element;
//         top++;
//         while(i>0 && a[i]>a[getParentIndex(i)]){
//             swap(a[i],a[getParentIndex(i)]);
//             i = getParentIndex(i);
//         }
//     }
//     void insetMinHeap(int element){
//         int i = top;
//         a[i] = element;
//         top++;
//         while(i>0 && a[i]<a[getParentIndex(i)]){
//             swap(a[i],a[getParentIndex(i)]);
//             i = getParentIndex(i);
//         }
//     }
//     void print(){
//         for(int i =0;i<size();i++){
//             if(a[i]!=0)
//             cout<<a[i]<<" ";
//         }
//     }


// };
// int main()
// {
//     BinaryTree *b = new BinaryTree(20);
//     // b->insert(10);
//     // b->insert(30);
//     // b->insert(5);
//     // b->insert(15);
//     // b->insert(25);
//     // b->insert(35);
//     b->insetMinHeap(10);
//     b->insetMinHeap(30);
//     b->insetMinHeap(5);
//     b->insetMinHeap(15);
//     b->insetMinHeap(25);
//     b->insetMinHeap(35);
    
//     b->print();

//     return 0;
// }
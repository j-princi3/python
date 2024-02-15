#include <iostream>
using namespace std;
// *cout<<a -> value
class arr{
    public:
    int capacity;
    int size;
    int a[];
    arr(int capacity, int size, int b[]){
        this->capacity=capacity;
        this->size=size;
        int *a = new int [size];
        for (int i=0;i< size;i++){
            a[i]=b[i];
        } 
    }
    void insert(int element){
        if (capacity==size){
            cout<<"Element cant be inserted as array capacity is full"<<endl;
            return ;
        }
        a[size]=element;
        size++;
    }
    void print(){
        for (int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void insert(int index,int element){
        if (capacity==size){
            cout<<"Element cant be inserted as array capacity is full"<<endl;
            return ;
        }
        size++;
        
        for (int i=size-1;i>index;i--){
            a[i]=a[i-1];
        }
        a[index]=element;
    }
    void doubling(int element){
        int *n = new int [capacity*2];
        if (capacity==size){
            
            n=a;
            n[size]=element;
            size++;
        }
        for (int i=0;i<size;i++){
            cout<<n[i]<<" ";
        }
        cout<<endl;
        return ;
    }
};
int main(){
    int b[6]={1,2,3,4,5,6};
    arr obj(6,6,b);
    obj.doubling(10);
    // obj.insert(10);
    // obj.insert(5,0);
    // obj.print();
    return 0;
}
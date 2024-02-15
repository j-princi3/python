// #include <iostream>
// using namespace std;
// void occurence(int mat[],int occ,int size,int n)
// {
//     if (occ==mat[0] && size>=1 ){
//         cout<<"found "<<occ<<n-size;
//         return ;
//     }
//     occurence(mat+1,occ,size-1,n);

// }
// // void back()

// int main() {
//     int mat[]={2,4,2,1,2,2,7,2,0};
//     occurence(mat,1,sizeof(mat)/sizeof(mat[0]),sizeof(mat)/sizeof(mat[0]));
// }
#include <iostream>
using namespace std;
class node{
    public:
    int n;
    node *next;
    public:
    node(int n1){
        n=n1;
        next=nullptr;
    }
};
void insert (node * &q,int num){
    node *neew=new node(num);
    while(q->next!=nullptr){
        q=q->next;
    }
    q->next=neew;
}
void print(node *&head){
        node *temp=head;
        while(temp!=nullptr){
            cout<<temp->n<<" -> ";
            temp=temp->next;
        }
        cout<<"0"<<endl;
    }
int main(){
    node *q= new node(2);
    insert(q,92);
    print(q);
}
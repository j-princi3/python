#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
Node *Creation(Node * &root){
    cout<<"Enter data:"<<endl;
    int d;
    cin>>d;
    if(d==-1){
        return nullptr;
    }
    Node *stru=new Node(d);
    root=stru;
    cout<<"Enter the element to the left of "<<d<<" :"<<endl;
    Creation(root->left);
    cout<<"Enter the element to the right of "<<d<<" :"<<endl;
    Creation(root->right);
    return root;
}
int main(){
    Node *root=new Node(NULL);
    cout<<Creation(root);
}
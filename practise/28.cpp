#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};
class binaryTree{
    public:
    node * creation(node *root,int val){
        if (root==nullptr){
            return new node(val);
        }
        if (val<root->data){
            root->left=creation(root->left,val);
        }
        else{
            root->right=creation(root->right,val);
        }
    }
    void inorder(node *root){
        if(root==nullptr){
            return ;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};
int main(){
    node *root=new node(10);
    binaryTree *b=new binaryTree();
    b->creation(root,9);
    b->creation(root,2);
    b->inorder(root);
    b->creation(root,11);
    b->inorder(root);

}
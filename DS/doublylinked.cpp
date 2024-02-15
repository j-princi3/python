#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
class doublylinked{
    node *head;
    public:
    doublylinked(node *h){
        head=h;
    }
    void creation(int d){
        node *newNode=new node(d);
        node *temp=head;
        while(temp->right!=nullptr){
            temp=temp->right;
        }
        newNode->left=temp;
        temp->right=newNode;
    }
    void print(){
        node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->right;
        }
        cout<<endl;
    }
    void insertion(int d,int pos){
        node *newNode=new node(d);
        node *temp=head;
        int size=0;
        while(temp!=nullptr){
            size++;
            if(pos==1){
                temp->left=newNode;
                newNode->right=temp;
                temp=newNode;
                head=temp;
                break;
            }
            if(pos-1==size){
                newNode->right=temp->right;
                newNode->left=temp;
                temp->right=newNode;
                temp=temp->right;
                temp->left=newNode;
                break;
            }
            temp=temp->right;
        }

    }
    void reverse(){
        node*head1=head;
        while(head1!=nullptr){
            node *temp=head1->right;
            head1->right=head1->left;
            head1->left=head1->right;
            head=head1;
            head1=temp;
        }
    }
    void deleting(int pos) {
    node *temp = head;
    
    // Special case: Deleting the head node
    if (pos == 1) {
        head = head->right;
        if (head != nullptr)
            head->left = nullptr;
        delete temp;
        return;
    }

    int size = 1; // Initialize size to 1 as we're considering the head node
    while (temp != nullptr && size < pos - 1) {
        temp = temp->right;
        size++;
    }

    // Adjust pointers to remove the node at position pos
    node *toDelete = temp->right;
    temp->right = toDelete->right;
    if (toDelete->right != nullptr)
        toDelete->right->left = temp;
    delete toDelete;
}

};
int main(){
    node *head=new node (1);
    doublylinked *d= new doublylinked(head);
    d->creation(2);
    d->creation(3);
    d->print();
    d->reverse();
    d->print();
    d->insertion(0,4);
    d->print();
    d->deleting(2);
    d->print();
}
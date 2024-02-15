#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *pre;
    node(int d){
        data=d;
        next=nullptr;
        pre=nullptr;
    }
};
void insert(int data,node *head){
    node *temp=new node(data);
    while (head->next!=nullptr)
    {
        head=head->next;
    }
    head->next=temp;
    head->next->pre= head;
}
void print(node *head){
    cout<<" 0 < = > ";
    while(head!=nullptr){
        cout<<head->data<<" < = > ";
        head=head->next;
    }
    cout<<" 0 "<<endl;
}
void reverse(node *head){
    if(head == nullptr){
        return;
    }
    reverse(head->next);
    if (head !=nullptr){
        cout<<head->data<<" ";
    }

}
int position(node* &head){
    int size=0;
    while(head->next!=nullptr){
        size++;
        head=head->next;
    }
    return size;
}
void remove(node *&head){
    // int pos=position(node*head);
    // if (pos%2==0){
        
    // }

}
void insertAthead(node * &head, int m){
    node *d= new node(m);
    d->next=head;
    head->pre=d;
    head=d;
}
int main(){
    node *p=new node(1);
    insert(2,p);
    insert(3,p);
    print(p);
    reverse(p);
    insertAthead(p,8);
    remove(p);
    print(p);
    return 0;
}


// 4.Stacks
// i)Write a program that implement stack (its operations) using
// Arrays	ii)linked lists
// iii)Infix to Postfix Conversion
// iv)Check for balanced parentheses in an expression
// v)String Palindrome


// #include <iostream>
// // #include <stack>
// using namespace std;
// class 
// int main(){

// }
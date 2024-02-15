
// 2.	Write a program to perform the following operations on doubly linked list:
// i)	Creation	ii)Insertion	iii)Deletion	iv)Traversal	v)Print the list in reverse

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
    }

};
void print(node * &head){
    node *temp=head;
    cout<<" 0 <=> ";
    while(temp!=nullptr){
        cout<<temp->data<<" <=> ";
        temp=temp->next;
    }
    cout<<" 0 "<<endl;
    return;
}

void insertAtHead(node *&head, int d){
    node* n=new node(d);
    n->next=head;
    head->prev=n;
    head=n;

}

void creation(node * &head,int d){
    node *temp=head;
    node *n=new node(d);
    while(temp->next !=nullptr){
       temp= temp->next;
    }
    
    temp->next=n;
    (temp->next)->prev=temp;

    return ;
    
}

int main(){
    node *head=new node(1);
    creation(head,2);
    creation(head,3);

    creation(head,4);
    creation(head,5);
    creation(head,6);
    insertAtHead(head,0);
    insertAtHead(head,-1);
    // reverse(head);
    print(head);
    // reverse(head);
    print(head);
    return 0;
}

// 1.Write a program to perform the following operations on singly linked list:
// i)Creation	ii) Insertion iii) Deletion iv) Traversal
// v) length of the linked list


#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int num){
        this->data=num;
        this->next=nullptr;
    }
};
    void insertAtHead(node * &head,int d){
        node *node1=new node(d);
        node1->next=head;
        head=node1;
        return;
    }
    void printInfo(node * &head){
        node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"null"<<endl;
        return;
    }
    bool search(node * &head,int key){
        node *temp=head;
        while(temp!=nullptr){
            if (temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void deletion(node * &head ,int key){
        node *temp=head;
        if (temp->data==key){
            head=temp->next;
            return ;
        }
        node *ptr=temp;
        temp=temp->next;
        while(temp!=nullptr){
            if (temp->data==key){
                ptr->next=temp->next;
                return ;
            }
            temp=temp->next;
            ptr=ptr->next;
        }
    }
    // void insertAtTail(node * &head,int d){
    //     node *temp=head;
    //     node *n=new node(d);
    //     while(temp!=nullptr){
    //         cout<<temp->data<<endl;
    //         temp=temp->next;
    //     }
    //     temp->next=n;
    //     cout<<(temp->next)->data<<endl;
    // }
    void insertAtTail(node *&head, int d) {
    node *temp = head;
    node *n = new node(d);
    if (head == nullptr) {
        head = n;
        return;
    }
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
}


int main(){
    node *head=nullptr;
    insertAtHead(head,9);
    insertAtTail(head,71);
    insertAtHead(head,10);
    insertAtTail(head,7);
    printInfo(head);
    deletion(head,71);
    printInfo(head);
    // cout<<search(head, 10);
    return 0;
}
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=nullptr;
        // cout<<data<<"  "<<next;
    }
    };
    void insertAtTail(Node * &head,int n){
        Node *temp=head;
        Node *na=new Node(n);
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=na;
    }
    void print(Node *&head){
        Node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"0"<<endl;
    }
    void reverse(Node * &head){
        if(head == nullptr){
            return ;
        }
        reverse(head->next);
        Node *prev=new Node(0);
        prev->next=head;
        print(prev);
    }
    Node* reverseRecursive (Node* &head){

        if (head==NULL || head->next==NULL) {
            return head;
        }

        Node* newhead= reverseRecursive(head->next);
        head->next->next=head; 
        head->next=NULL;
        print(newhead);
        return newhead;
        }

int main(){
    Node *head=new Node(3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    // print(head);
    // reverse(head);
    Node *n=reverseRecursive(head);
    print(n);
    // print (head);
    return 0;
}
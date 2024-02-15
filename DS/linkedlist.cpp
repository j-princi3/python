#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=nullptr;
    }
    void creation(node *head,int da){
        node *temp=head;
        node *newNode=new node(da);
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void print(node *head){
        node *temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void insertion(node *&head,int pos ,int da){
        node *newNode=new node(da);
        if(pos == 1){
            newNode->next = head;
            head = newNode;
            return;
        }
        node *temp=head;
        int size=1;
        while(temp!=nullptr){
            if (size == pos - 1) {
                newNode->next = temp->next;
                temp->next = newNode;
                break;
            }
            size++;
            temp=temp->next;
        }
    }
    void deletion(node *head, int pos) {
        if (head == nullptr)
            return;
        node *temp = head;
        if (pos == 1) {
            head = head->next;
            delete temp;
            return;
        }
        for (int i = 1; temp != nullptr && i < pos - 1; i++) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr)
            return;
        node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};

int main(){
    node *head=new node(1);
    head->creation(head,2);
    head->creation(head,3);
    head->creation(head,4);
    head->insertion(head,3,0);
    head->deletion(head,3);
    head->print(head);
    return 0;
}

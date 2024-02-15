#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int data){
        this->data=data;
        next=nullptr;
    }
} ;

class Queue{
    public:
    Node *front;
    Node *rear;
    int size;
    Queue(){
        front=nullptr;
        rear=nullptr;
        size=0;
    }
    void enqueue(int d){
        Node *newnode=new Node(d);
        if(front==nullptr){
            front =newnode;
            rear=newnode;
            size++;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        size++;
    }
    }
    void dequeue(){
        if (front ==nullptr){
            cout<<"Queue is empty "<<endl;
        }
        else{
        Node *temp=front;
        front=front->next;
        delete temp;
        size--;
        }
    }
    void print(){
        Node *temp=front;
        while (temp!=nullptr){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"0."<<endl;
    }
    int length(){
        return size;
    }
    void isEmpty(){
        if(front==nullptr){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Queue is non empty"<<endl;
        }
    }
    Node* reverse(){
        
    }
};
int main(){
    Queue *q=new Queue();
    q->enqueue(5);
    q->enqueue(10);
    q->enqueue(15);
    q->dequeue();
    q->print();
    cout<<q->length();
    return 0;
}
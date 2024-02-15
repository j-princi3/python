// 4.Stacks
// i)Write a program that implement stack (its operations) using
// Arrays	ii)linked lists
// iii)Infix to Postfix Conversion
// iv)Check for balanced parentheses in an expression
// v)String Palindrome

// ================================================================================


// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int data;
//     int *arr;
//     int size=5;
//     int top=-1;
//     Stack(){
//         int *arr=new int[size];
//     };
//     push(int num){
//         if(size-1==top){
//             cout<<"Stack overflow"<<endl;
//         }
//         else{
//             top++;
//             arr[top]=num;
//         }
//     }
//     pop(){
//         if(top==-1){
//             cout<<"Stack underflow"<<endl;
//         }
//         else{
//             top--;
//         }
//     }
//     peek(){
//         if(top==-1){
//             cout<<"Stack is empty"<<endl;
//         }
//         else{
//             cout<<"peek element is :"<<arr[top]<<endl;
//         }
//     }
//     isEmpty(){
//         if (top==-1){
//             cout<<"True"<<endl;
//         }
//         else{
//             cout<<"False"<<endl;
//         }
//     }
// };
// int main(){
//     Stack *st=new Stack();
//     st->push(5);
//     st->pop();
//     st->push(-1);
//     st->push(1);
//     st->push(2);
//     st->push(3);
//     st->push(10);
//     st->push(11);
//     st->peek();
//     st->isEmpty();
// }

// ===============================================================================

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node(string d) {
        data=d;
     next=nullptr; }
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(string p) {
        Node* newNode = new Node(p);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
        } else {
            Node* temp = top;
            cout<<top->data<<" ";
            top = top->next;
            delete temp;
        }
    }

    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }

    void print() {
        Node* head = top;
        while (head != nullptr) {
            cout << head->data << " -> ";
            head = head->next;
        }
        cout << "0." << endl;
    }
};

int main() {
    Stack* s = new Stack();
    s->push("keshav");
    s->push("memorial");
    s->push("institute");
    s->push("of");
    s->push("Technology");
    s->pop();
    s->pop();
    s->pop();
    s->pop();
    s->pop();

    delete s;
    return 0;
}

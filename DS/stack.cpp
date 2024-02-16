// 4.Stacks
// i)Write a program that implement stack (its operations) using
// Arrays	ii)linked lists
// iii)Infix to Postfix Conversion
// iv)Check for balanced parentheses in an expression
// v)String Palindrome

// ================================================================================

// #include <iostream> 
  
// using namespace std; 
  
// #define MAX 1000 
  
// class Stack { 
//     int top; 
  
// public: 
//     int a[MAX]; // Maximum size of Stack 
  
//     Stack() { top = -1; } 
//     bool push(int x); 
//     int pop(); 
//     int peek(); 
//     bool isEmpty(); 
// }; 
  
// bool Stack::push(int x) 
// { 
//     if (top >= (MAX - 1)) { 
//         cout << "Stack Overflow"; 
//         return false; 
//     } 
//     else { 
//         a[++top] = x; 
//         cout << x << " pushed into stack\n"; 
//         return true; 
//     } 
// } 
  
// int Stack::pop() 
// { 
//     if (top < 0) { 
//         cout << "Stack Underflow"; 
//         return 0; 
//     } 
//     else { 
//         int x = a[top--]; 
//         return x; 
//     } 
// } 
// int Stack::peek() 
// { 
//     if (top < 0) { 
//         cout << "Stack is Empty"; 
//         return 0; 
//     } 
//     else { 
//         int x = a[top]; 
//         return x; 
//     } 
// } 
  
// bool Stack::isEmpty() 
// { 
//     return (top < 0); 
// } 
  
// // Driver program to test above functions 
// int main() 
// { 
//     class Stack s; 
//     s.push(10); 
//     s.push(20); 
//     s.push(30); 
//     cout << s.pop() << " Popped from stack\n"; 
    
//     //print top element of stack after popping 
//     cout << "Top element is : " << s.peek() << endl; 
    
//     //print all elements in stack : 
//     cout <<"Elements present in stack : "; 
//     while(!s.isEmpty()) 
//     { 
//         // print top element in stack 
//         cout << s.peek() <<" "; 
//         // remove top element in stack 
//         s.pop(); 
//     } 
  
//     return 0; 
// }
// ===============================================================================
#include <iostream>

using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    bool is_empty() {
        return top == nullptr;
    }

    void push(int item) {
        Node* newNode = new Node(item);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
            return -1; // Return a default value indicating failure
        } else {
            Node* temp = top;
            int top_item = temp->data;
            top = top->next;
            delete temp;
            return top_item;
        }
    }

    int peek() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
            return -1; // Return a default value indicating failure
        } else {
            return top->data;
        }
    }

    int size() {
        int count = 0;
        Node* current = top;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout<<stack.peek();
    cout << "Current stack:";
    int size = stack.size();
    for (int i = 0; i < size; ++i) {
        cout << " " << stack.peek();
        stack.pop();
    }
    cout << endl;

    cout << "Size: " << stack.size() << endl;

    return 0;
}

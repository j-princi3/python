#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node(char d) {
        data = d;
        next = nullptr;
    }
};

class Stack {
public:
    Node* top;
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(char d) {
        Node* newNode = new Node(d);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop() {
        if (top == nullptr) {
            cout << "stack underflow" << endl;
        } else {
            Node* temp = top;
            top = temp->next;
            delete temp;
        }
    }

    char peek() {
        if (top == nullptr) {
            return 0;
        } else {
            return top->data;
        }
    }

    void print() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack* s = new Stack();
    string brak;
    cout << "Enter a string with parentheses: ";
    cin >> brak;

    for (int i = 0; i < brak.length(); i++) {
        if (brak[i] == '(' || brak[i] == '{' || brak[i] == '[') {
            s->push(brak[i]);
        } else {
            if ((brak[i] == ')' && s->peek() == '(') ||
                (brak[i] == '}' && s->peek() == '{') ||
                (brak[i] == ']' && s->peek() == '[')) {
                s->pop();
                }
        }
    }

    if (s->isEmpty()) {
        cout << "The parentheses are balanced.";
    } else {
        cout << "The parentheses are not balanced.";
    }

    return 0;
}
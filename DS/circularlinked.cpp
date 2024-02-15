#include <iostream>

using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Circular Linked List class
class CircularLinkedList {
private:
    Node* head;

public:
    // Constructor
    CircularLinkedList() {
        head = nullptr;
    }

    // Method to append a new node to the end of the list
    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Method to print the list
    void printList() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

// Main function for testing
int main() {
    CircularLinkedList list;
    
    // Appending elements to the list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    // Printing the list
    cout << "Circular Linked List: ";
    list.printList();

    return 0;
}

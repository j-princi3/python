#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Insert node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            head->next = head; // Point to itself for circular behavior
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Make the new node point back to head for circular behavior
        }
    }

    // Insert node at a specified position
    void insert(int value, int position) {
        Node* newNode = new Node(value);
        if (head == nullptr || position <= 1) {
            newNode->next = head;
            if (head != nullptr) {
                Node* temp = head;
                while (temp->next != head) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp->next != head; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Print all elements of the list
    void display() {
        
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    // Delete node with specified value
    void deleteNode(int value) {
        if (head->data == value) {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            if (temp == head) { // Only one node in the list
                delete head;
                head = nullptr;
            } else {
                temp->next = head->next;
                delete head;
                head = temp->next;
            }
            return;
        }
        Node* temp = head;
        while (temp->next != head && temp->next->data != value) {
            temp = temp->next;
        }
        if (temp->next == head) {
            cout << "Value not found in the list" << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Count total number of nodes in the list
    int countNodes() {
        if (head == nullptr) {
            return 0;
        }
        int count = 0;
        Node* temp = head;
        do {
            count++;
            temp = temp->next;
        } while (temp != head);
        return count;
    }
};

int main() {
    CircularLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display(); // Output: 1 2 3
    list.insert(4, 2);
    list.display(); // Output: 1 4 2 3
    cout << "Total nodes: " << list.countNodes() << endl; // Output: Total nodes: 4
    list.deleteNode(2);
    list.display(); // Output: 1 4 3
    cout << "Total nodes: " << list.countNodes() << endl; // Output: Total nodes: 3

    return 0;
}

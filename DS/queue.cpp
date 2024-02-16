// 5.Queues
// i)Write a program that implement Queue(itsoperations) using
// Arraysii) linked lists
// iii)Queue implementation using two stacks.
// iv)Check if a queue can be sorted into another queue using a stack

// #include <iostream>

// using namespace std;

// const int MAX_SIZE = 100; // Maximum size of the queue

// class Queue {
// private:
//     int items[MAX_SIZE];
//     int front, rear;

// public:
//     Queue() {
//         front = -1; // Initialize queue as empty
//         rear = -1;
//     }

//     bool is_empty() {
//         return front == -1;
//     }

//     bool is_full() {
//         return (rear + 1) % MAX_SIZE == front;
//     }

//     void enqueue(int item) {
//         if (!is_full()) {
//             if (is_empty()) {
//                 front = 0;
//                 rear = 0;
//             } else {
//                 rear = (rear + 1) % MAX_SIZE;
//             }
//             items[rear] = item;
//         } else {
//             cout << "Queue is full. Cannot enqueue more items." << endl;
//         }
//     }

//     int dequeue() {
//         if (!is_empty()) {
//             int front_item = items[front];
//             if (front == rear) {
//                 front = -1;
//                 rear = -1;
//             } else {
//                 front = (front + 1) % MAX_SIZE;
//             }
//             return front_item;
//         } else {
//             cout << "Queue is empty" << endl;
//             return -1; // Return a default value indicating failure
//         }
//     }

//     int peek() {
//         if (!is_empty()) {
//             return items[front];
//         } else {
//             cout << "Queue is empty" << endl;
//             return -1; // Return a default value indicating failure
//         }
//     }

//     int size() {
//         if (is_empty()) return 0;
//         return (rear - front + MAX_SIZE) % MAX_SIZE + 1;
//     }
// };

// int main() {
//     Queue queue;

//     queue.enqueue(1);
//     queue.enqueue(2);
//     queue.enqueue(3);

//     cout << "Current queue:";
//     int size = queue.size();
//     for (int i = 0; i < size; ++i) {
//         cout << " " << queue.peek();
//         queue.dequeue();
//     }
//     cout << endl;

//     cout << "Size: " << queue.size() << endl;

//     return 0;
// }


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

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool is_empty() {
        return front == nullptr;
    }

    void enqueue(int item) {
        Node* newNode = new Node(item);
        if (is_empty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (is_empty()) {
            cout << "Queue is empty" << endl;
            return -1; // Return a default value indicating failure
        } else {
            Node* temp = front;
            int front_item = temp->data;
            front = front->next;
            delete temp;
            return front_item;
        }
    }

    int peek() {
        if (is_empty()) {
            cout << "Queue is empty" << endl;
            return -1; // Return a default value indicating failure
        } else {
            return front->data;
        }
    }

    int size() {
        int count = 0;
        Node* current = front;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Current queue:";
    int size = queue.size();
    for (int i = 0; i < size; ++i) {
        cout << " " << queue.peek();
        queue.dequeue();
    }
    cout << endl;

    cout << "Size: " << queue.size() << endl;

    return 0;
}
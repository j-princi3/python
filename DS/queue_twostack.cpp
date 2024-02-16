#include <iostream>
#include <stack>

using namespace std;

class Queue {
private:
    stack<int> inbox;  // For enqueue operation
    stack<int> outbox; // For dequeue operation

public:
    void enqueue(int item) {
        inbox.push(item);
    }

    int dequeue() {
        if (outbox.empty()) {
            // Transfer elements from inbox to outbox
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        
        if (outbox.empty()) {
            cout << "Queue is empty" << endl;
            return -1; // Return a default value indicating failure
        }

        int front_item = outbox.top();
        outbox.pop();
        return front_item;
    }

    bool is_empty() {
        return inbox.empty() && outbox.empty();
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Dequeue: " << queue.dequeue() << endl;
    cout << "Dequeue: " << queue.dequeue() << endl;

    queue.enqueue(4);

    cout << "Dequeue: " << queue.dequeue() << endl;
    cout << "Dequeue: " << queue.dequeue() << endl;

    return 0;
}

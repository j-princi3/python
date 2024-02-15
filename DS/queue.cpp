// 5.Queues
// i)Write a program that implement Queue(itsoperations) using
// Arraysii) linked lists
// iii)Queue implementation using two stacks.
// iv)Check if a queue can be sorted into another queue using a stack

#include <iostream>
using namespace std;

class Queue{
    public:
    int size=5;
    int *arr;
    int rear=-1;
    int front =-1;
    Queue(){
        int *arr=new int[size];
    }
    void enqueue(int d){
        if (rear==size-1){
            cout<<"queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear]=d;
            if(front==-1){
                front++;
            }
        }
    }
    void dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            front++;
        }
    }
    void print(){
        int i=front;
        while(i<= rear){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
};

class CircularQueue {
    int size = 5;
    int *arr;
    int front = -1;
    int rear = -1;
public:
    CircularQueue() {
        arr = new int[size];
    }

    void enqueue(int d) {
        if (front == (rear + 1) % size) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear = (rear + 1) % size;
            arr[rear] = d;
        }
    }

    void dequeue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
        } else {
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % size;
            }
        }
    }

    void print() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);

        cout << endl;
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    CircularQueue *q = new CircularQueue();
    q->enqueue(5);
    q->enqueue(7);
    q->enqueue(8);
    q->enqueue(9);
    q->enqueue(1);
    // q->enqueue(2);  // Uncomment this line to test enqueue when the queue is full
    q->dequeue();
    q->dequeue();
    q->dequeue();

    // q->enqueue(2);
    q->print();

    delete q;  // Don't forget to free the memory allocated for the queue
    return 0;
}

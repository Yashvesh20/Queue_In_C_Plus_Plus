Yashvesh Singh 24070123138
#include<iostream>
using namespace std;

#define SIZE 5   

class Queue {
    int arr[SIZE];   
    int front, rear; 

public:   
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0; 
        arr[++rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front] << " removed from queue." << endl;
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue q;

    q.enqueue(110);
    q.enqueue(120);
    q.enqueue(320);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(460);
    q.display();

    return 0; 
}
output:
110 inserted into queue.
120 inserted into queue.
320 inserted into queue.
Queue elements: 110 120 320 
110 removed from queue.
Queue elements: 120 320 
460 inserted into queue.
Queue elements: 120 320 460 

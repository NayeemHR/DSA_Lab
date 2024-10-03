#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void push(int x) {
        if (rear >= MAX_SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = x;
    }

    void pop() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    void printQueue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.push(10); // Push 10
    q.push(20); // Push 20
    q.push(30); // Push 30
    q.printQueue(); // Print the queue
    q.pop(); // Pop an element
    q.printQueue(); // Print the queue after popping
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(10); // Push 10
    q.push(20); // Push 20
    q.push(30); // Push 30
    cout << "Queue: ";
    printQueue(q); // Print the queue
    q.pop(); // Pop an element
    cout << "Queue after pop: ";
    printQueue(q); // Print the queue after popping
    return 0;
}

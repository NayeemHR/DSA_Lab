#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    void printStack() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10); // Push 10
    s.push(20); // Push 20
    s.push(30); // Push 30
    s.printStack(); // Print the stack
    s.pop(); // Pop an element
    s.printStack(); // Print the stack after popping
    return 0;
}

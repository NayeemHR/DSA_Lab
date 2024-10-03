#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(10); // Push 10
    s.push(20); // Push 20
    s.push(30); // Push 30
    cout << "Stack: ";
    printStack(s); // Print the stack
    s.pop(); // Pop an element
    cout << "Stack after pop: ";
    printStack(s); // Print the stack after popping
    return 0;
}

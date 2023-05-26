#include <iostream>
#include <stack>

using namespace std;

class SpecialStack {
private:
    stack<int> elements;       // Stack for storing elements
    stack<int> minElements;    // Stack for storing minimum elements

public:
    void push(int value) {
        elements.push(value);

        if (minElements.empty() || value <= minElements.top()) {
            minElements.push(value);
        }
    }

    void pop() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot perform pop operation." << endl;
            return;
        }

        if (elements.top() == minElements.top()) {
            minElements.pop();
        }

        elements.pop();
    }

    int top() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot perform top operation." << endl;
            return -1;  // Return a default value indicating an empty stack
        }

        return elements.top();
    }

    int getMin() {
        if (minElements.empty()) {
            cout << "Stack is empty. Cannot retrieve minimum element." << endl;
            return -1;  // Return a default value indicating an empty stack
        }

        return minElements.top();
    }

    bool isEmpty() {
        return elements.empty();
    }

    bool isFull() {
        // Assuming stack is implemented using an underlying array with a fixed size
        // Modify this condition according to the specific implementation
        return elements.size() == 32677;
    }
};

int main() {
    SpecialStack stack;
    stack.push(3);
    stack.push(5);
    stack.push(2);
    stack.push(1);

    cout << "Minimum element: " << stack.getMin() << endl;  // Output: 1
    stack.pop();
    cout << "Minimum element: " << stack.getMin() << endl;  // Output: 2

    return 0;
}

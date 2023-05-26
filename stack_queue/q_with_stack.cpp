#include <iostream>
#include <stack>

class Queue {
private:
    std::stack<int> stack1;
    std::stack<int> stack2;

    //void transferStacks() {
        
    //}

public:
    void push(int item) {
        stack1.push(item);
    }

    int pop() {
        if (stack1.empty() && stack2.empty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1;  // or throw an exception
        }

        // Transfer elements from stack1 to stack2 if stack2 is empty
        if (stack2.empty()) {
            // Transfer elements from stack1 to stack2
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        }

        // Pop the top element from stack2 (which is the oldest element)
        int front = stack2.top();
        stack2.pop();
        return front;
    }
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << q.pop() << std::endl;  // Output: 1
    std::cout << q.pop() << std::endl;  // Output: 2

    q.push(4);

    std::cout << q.pop() << std::endl;  // Output: 3
    std::cout << q.pop() << std::endl;  // Output: 4

    std::cout << q.pop() << std::endl;  // Output: Queue is empty.

    return 0;
}

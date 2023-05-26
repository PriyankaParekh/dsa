#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class TwoStacks {
private:
    vector<int> arr;  // Array to store elements
    int top1;         // Top index for the first stack
    int top2;         // Top index for the second stack
    int capacity;     // Total capacity of the array

public:
    // Constructor
    TwoStacks(int size) {
        capacity = size;
        arr.resize(size);
        top1 = -1;
        top2 = capacity;
    }

    // Push an element to the first stack
    void push1(int value) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = value;
        } else {
            cout<<"-1";
        }
    }

    // Push an element to the second stack
    void push2(int value) {
          if (top1 < top2 - 1) {
            top2--;
            arr[top2] = value;
        } else {
            cout<<"-1";
        }
    }

    // Pop an element from the first stack
    int pop1() {
       if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            return -1;
        }
    }

    // Pop an element from the second stack
    int pop2() {
        if (top2 < capacity) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            return -1;
        }
    }

    // Check if the first stack is empty
    bool isEmpty1() {
        return (top1 == -1);
    }

    // Check if the second stack is empty
    bool isEmpty2() {
        return (top2 == capacity);
    }
};

int main() {
    TwoStacks stacks(5);

    // Pushing elements to the first stack
    stacks.push1(1);
    stacks.push1(2);
    stacks.push1(3);

    // Pushing elements to the second stack
    stacks.push2(4);
    stacks.push2(5);

    // Pop elements from the first stack
    cout << "Popped from stack 1: " << stacks.pop1() << endl;
    cout << "Popped from stack 1: " << stacks.pop1() << endl;

    // Pop elements from the second stack
    cout << "Popped from stack 2: " << stacks.pop2() << endl;
    cout << "Popped from stack 2: " << stacks.pop2() << endl;

    return 0;
}

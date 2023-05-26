#include <iostream>
#include <queue>
using namespace std;

queue<int> reverseQueue(queue<int>& q) {
    if (q.empty()) {
        return q;
    }

    int front = q.front();
    q.pop();
    queue<int> reversedQueue = reverseQueue(q);
    reversedQueue.push(front);

    return reversedQueue;
}

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Original Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> reversedQueue = reverseQueue(q);

    cout << "\nReversed Queue: ";
    while (!reversedQueue.empty()) {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }

    return 0;
}

#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // If the fast pointer meets the slow pointer, a loop is detected
        if (slow == fast) {
            return true;
        }
    }

    // No loop detected
    return false;
}

int main() {
    // Create a sample linked list with a loop
    Node* head = new Node{1, NULL};
    Node* node2 = new Node{2, NULL};
    Node* node3 = new Node{3, NULL};
    Node* node4 = new Node{4, NULL};
    Node* node5 = new Node{5, NULL};

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    // Create a loop by connecting the last node to the second node
    node5->next = node2;

    bool hasLoop = detectLoop(head);
    
    if (hasLoop) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

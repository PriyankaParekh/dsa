#include <bits/stdc++.h>

// Doubly linked list node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to reverse a doubly linked list
Node* reverseDLL(Node* head) {
    Node* current = head;
    Node* temp = NULL;

    while (current != NULL) {
        // Swap prev and next pointers of the current node
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node
        current = current->prev;
    }

    // Update the head pointer
    if (temp != NULL) {
        head = temp->prev;
    }

    return head;
}

// Function to print a doubly linked list
void printDLL(Node* head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample doubly linked list: 1 <-> 2 <-> 3 <-> 4 <-> 5
    Node* node1 = new Node{1, NULL, NULL};
    Node* node2 = new Node{2, NULL, NULL};
    Node* node3 = new Node{3, NULL, NULL};
    Node* node4 = new Node{4, NULL, NULL};
    Node* node5 = new Node{5, NULL, NULL};

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;

    std::cout << "Original doubly linked list: ";
    printDLL(node1);

    // Reverse the doubly linked list
    Node* reversedHead = reverseDLL(node1);

    std::cout << "Reversed doubly linked list: ";
    printDLL(reversedHead);

    // Clean up memory
    Node* current = reversedHead;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}


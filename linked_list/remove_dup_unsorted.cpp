#include <iostream>
#include <unordered_set>

struct Node {
    int data;
    Node* next;
};

Node* removeDuplicates(Node* head) {
    if (head == NULL)
        return head;

    std::unordered_set<int> uniqueElements;
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL) {
        if (uniqueElements.find(current->data) != uniqueElements.end()) {
            // Duplicate element found, remove the node
            prev->next = current->next;
            delete current;
            current = prev->next;
        } else {
            // Add element to the set and move to the next node
            uniqueElements.insert(current->data);
            prev = current;
            current = current->next;
        }
    }
    return current;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample unsorted linked list with duplicates
    Node* head = new Node{1, NULL};
    Node* node2 = new Node{3, NULL};
    Node* node3 = new Node{2, NULL};
    Node* node4 = new Node{2, NULL};
    Node* node5 = new Node{4, NULL};
    Node* node6 = new Node{3, NULL};
    Node* node7 = new Node{5, NULL};

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    removeDuplicates(head);

    std::cout << "Linked List after removing duplicates: ";
    printLinkedList(head);

    return 0;
}

#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* removeDuplicates(Node* head) {
       if (head == NULL)
        return head;

    Node* current = head;

    while (current->next != NULL) {
        if (current->data == current->next->data) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    return head;
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
    // Create a sample sorted linked list with duplicates
    Node* head = new Node{1, NULL};
    Node* node2 = new Node{2, NULL};
    Node* node3 = new Node{2, NULL};
    Node* node4 = new Node{3, NULL};
    Node* node5 = new Node{3, NULL};

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    removeDuplicates(head);

    std::cout << "Linked List after removing duplicates: ";
    printLinkedList(head);

    return 0;
}

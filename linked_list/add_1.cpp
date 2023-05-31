#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr != NULL) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

ListNode* addOne(ListNode* head) {
    ListNode* curr = head;
    ListNode* rightmost = NULL;

    // Find the rightmost non-9 node or the last node
    while (curr && curr->next) {
        if (curr->val != 9) {
            rightmost = curr;
        }
        curr = curr->next;
    }

    // Increment the value of the rightmost non-9 node or the last node
    if (curr->val != 9) {
        curr->val += 1;
    } else {
        // If the last node is 9, set it to 0 and add a new node with value 1
        rightmost->val += 1;
        curr = rightmost->next;
        while (curr) {
            curr->val = 0;
            curr = curr->next;
        }
    }

    // If the first node has value 0, add a new node with value 1 at the beginning
    if (head->val == 0) {
        ListNode* newHead = new ListNode(1);
        newHead->next = head;
        return newHead;
    }

    return head;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(9);

    std::cout << "Original list: ";
    printList(head);

    ListNode* result = addOne(head);

    std::cout << "List after adding 1: ";
    printList(result);

    // Clean up memory
    ListNode* curr = result;
    while (curr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}
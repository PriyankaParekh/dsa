#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode(0);
    ListNode* current = result;
    int carry = 0;

    while (l1 || l2) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
    }

    if (carry > 0) {
        current->next = new ListNode(carry);
    }

    return result->next;
}

// Helper function to create a linked list from an array of digits
ListNode* createLinkedList(int digits[], int size) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    for (int i = 0; i < size; ++i) {
        current->next = new ListNode(digits[i]);
        current = current->next;
    }

    return dummy->next;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;

    while (current) {
        std::cout << current->val << " -> ";
        current = current->next;
    }

    std::cout << "NULL" << std::endl;
}

int main() {
    int digits1[] = {2, 4, 3};
    int digits2[] = {5, 6, 4};

    ListNode* l1 = createLinkedList(digits1, 3);
    ListNode* l2 = createLinkedList(digits2, 3);

    ListNode* result = addTwoNumbers(l1, l2);

    std::cout << "Input:" << std::endl;
    std::cout << "Number 1: ";
    printLinkedList(l1);
    std::cout << "Number 2: ";
    printLinkedList(l2);
    std::cout << "Output:" << std::endl;
    std::cout << "Sum: ";
    printLinkedList(result);

    return 0;
}

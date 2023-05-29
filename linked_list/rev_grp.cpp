// Iterative C++ program to reverse a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList() { head = NULL; }

    /* Function to reverse the linked list */
    Node *reverse(Node *head, int k)
    {
        // Initialize current, previous and next pointers
        Node *current = head;
        Node *prev = NULL, *next = NULL;
        int c = 0;
        while (current != NULL && c < k)
        {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
            c++;
        }
        if (next != NULL)
        {
            head->next = reverse(next, k);
        }
        return prev;
    }

    /* Function to print linked list */
    void print(Node *head)
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

/* Driver code*/
int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(25);
    ll.push(4);
    ll.push(15);
    ll.push(45);
    ll.push(50);
    ll.push(55);
    ll.push(70);

    cout << "Given linked list\n";
    ll.print(ll.head);

    int grp = 3;
    ll.head = ll.reverse(ll.head, grp);

    std::cout << "\nReversed Linked List in Groups of " << grp << ": ";
    ll.print(ll.head);
    return 0;
}

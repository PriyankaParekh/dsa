#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    ListNode* next;

    ListNode(int x){
        data = x;
        next = NULL;
    }
};

ListNode* head;


ListNode* middle(ListNode* head){
    int count = 0;
    ListNode* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0; i<count/2; i++){
        temp = temp->next;
    }
    return temp;

}
int main(){
    head = NULL;
    head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    cout<<middle(head)->data<<endl;
    return 0;
}
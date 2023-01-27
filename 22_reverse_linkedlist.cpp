#include <bits/stdc++.h>
using namespace std;

class ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseLL(ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;
    ListNode* prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL ){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

ListNode* reverseKLL(ListNode* head, int K){
    if(head == NULL || head->next == NULL)
        return head;
    ListNode* prev = NULL, *curr = head, *next = NULL;
    int k = 0;
    while(curr != NULL && k < K){
        k++;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = reverseKLL(next, K);
    return head;
}

int main(){
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        int carry = 0;
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        while(l1 != NULL || l2 != NULL || carry > 0){
            int v1 = 0, v2 = 0;
            if(l1 != NULL){
                v1 = l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                v2 = l2->val;
                l2 = l2->next;
            }
            int val = v1 + v2 + carry;
            carry = val / 10;
            val = val%10;
            ListNode* temp = new ListNode(val);
            ans->next = temp;
            ans = ans->next;
        }
        return ptr->next;
    }
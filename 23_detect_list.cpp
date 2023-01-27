#include <bits/stdc++.h>
using namespace std;

class ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head) {
        ListNode *slow =head, *fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast)
                return true;
        }
        return false;
    }

ListNode* cycleStart(ListNode *head) {
    ListNode *slow =head, *fast = head, *random = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            while(slow != random){
                slow = slow->next;
                random = random->next;
                return random;
            }
        }
        return -1;
    }
}

int main(){
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        ListNode* store = new ListNode(0);
        ListNode* ans = store;
        
        while (list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                store->next = list1;
                list1 = list1->next;
                store = store->next;
            }
            else{
                store->next = list2;
                list2 = list2->next;
                store = store->next;
            }
        }
        if(list1 == NULL){
            store->next = list2;
        }
        if(list2 == NULL){
            store->next = list1;
        }
        return ans->next;
    }

int main(){
    return 0;
}
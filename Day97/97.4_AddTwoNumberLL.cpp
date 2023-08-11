#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* ptr = ans;
        int c=0;
        while(l1 != NULL || l2 != NULL || c){
            ListNode* next = new ListNode(c);
            if(l1 != NULL){
                next->val += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                next->val += l2->val;
                l2 = l2->next;
            }
            c = next->val/10;
            next->val %= 10;
            ptr->next = next;
            ptr = ptr->next;
        }
        return ans->next;
    }
};
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head->next == NULL)
        {
            head = NULL;
            return head;
        }
        else if (head->next->next == NULL)
        {
            head->next = NULL;
            return head;
        }

        ListNode *cur = head;
        cur = cur->next;
        ListNode *prev = head;
        ListNode *dub = new ListNode();
        dub = cur->next;
        // cout<<prev->val<<" "<<cur->val<<" "<<dub->val;
        while (dub != NULL && dub->next != NULL)
        {
            dub = dub->next->next;
            prev = cur;
            cur = cur->next;
        }
        // cout<<prev->val;
        prev->next = cur->next;
        // cur->next = NULL;
        return head;
    }
};
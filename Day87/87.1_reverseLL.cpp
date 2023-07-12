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
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *ptr = new ListNode(head->val);
        head = head->next;
        while (head != NULL)
        {
            ListNode *cur = new ListNode(head->val, ptr);
            ptr = cur;
            head = head->next;
        }
        return ptr;
    }
};
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
    void reorderList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return;
        }
        ListNode *cur = head;
        ListNode *dub = head;
        while (dub != NULL && dub->next != NULL)
        {
            dub = dub->next->next;
            cur = cur->next;
        }
        ListNode *prev = NULL;
        while (cur != NULL)
        {
            dub = cur->next;
            cur->next = prev;
            prev = cur;
            cur = dub;
        }
        cur = head;
        ListNode *next = head;
        while (prev->next != NULL)
        {
            dub = cur->next;
            next = prev->next;
            cur->next = prev;
            prev->next = dub;
            prev = next;
            cur = cur->next->next;
        }
    }
};
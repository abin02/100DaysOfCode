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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head->next == NULL)
        {
            return NULL;
        }
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        for (int i = 1; i < n; i++)
        {
            ptr1 = ptr1->next;
        }
        if (ptr1->next == NULL)
        {
            return head = head->next;
        }
        ptr1 = ptr1->next;
        while (ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr2->next->next;
        return head;
    }
};
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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        while (ptr2 != NULL && ptr2->next != NULL)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
        return ptr1;
    }
};
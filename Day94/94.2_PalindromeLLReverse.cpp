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
    bool isPalindrome(ListNode *head)
    {
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        ListNode *prev = NULL;
        while (ptr2 != NULL && ptr2->next != NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
        }
        ptr2 = ptr1;
        ListNode *next = ptr1;
        while (ptr1 != NULL)
        {
            next = ptr1->next;
            ptr1->next = prev;
            prev = ptr1;
            ptr1 = next;
        }
        ptr2 = prev;
        while (ptr2 != NULL)
        {
            if (ptr2->val != head->val)
            {
                return false;
            }
            head = head->next;
            ptr2 = ptr2->next;
        }
        return true;
    }
};
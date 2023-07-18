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
    ListNode *rev(ListNode *l)
    {
        if (l == NULL || l->next == NULL)
        {
            return l;
        }
        ListNode *ptr = rev(l->next);
        l->next->next = l;
        l->next = NULL;
        return ptr;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *L2 = rev(l2);
        ListNode *L1 = rev(l1);
        ListNode *ans = new ListNode();
        ListNode *head = ans;
        int carry = 0;
        while (L1 != NULL && L2 != NULL)
        {
            int i = L1->val + L2->val + carry;
            if (i > 9)
            {
                carry = 1;
                i = i % 10;
            }
            else
            {
                carry = 0;
            }
            ans->next = new ListNode(i);
            ans = ans->next;
            L1 = L1->next;
            L2 = L2->next;
        }
        while (L1 != NULL)
        {
            int i = L1->val + carry;
            if (i > 9)
            {
                carry = 1;
                i = i % 10;
            }
            else
            {
                carry = 0;
            }
            ans->next = new ListNode(i);
            ans = ans->next;
            L1 = L1->next;
        }
        while (L2 != NULL)
        {
            int i = L2->val + carry;
            if (i > 9)
            {
                carry = 1;
                i = i % 10;
            }
            else
            {
                carry = 0;
            }
            ans->next = new ListNode(i);
            ans = ans->next;
            L2 = L2->next;
        }
        if (carry == 1)
        {
            ans->next = new ListNode(1);
        }
        head = head->next;

        return rev(head);
    }
};

// More Optimized and cleaner solution
class Solution
{
public:
    ListNode *rev(ListNode *l)
    {
        if (l == NULL || l->next == NULL)
        {
            return l;
        }
        ListNode *ptr = rev(l->next);
        l->next->next = l;
        l->next = NULL;
        return ptr;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *L2 = rev(l2);
        ListNode *L1 = rev(l1);
        ListNode *ans = new ListNode();
        ListNode *head = ans;
        int carry = 0;
        while (L1 != NULL || L2 != NULL || carry)
        {
            int i = 0;
            if (L1 != NULL)
            {
                i += L1->val;
                L1 = L1->next;
            }
            if (L2 != NULL)
            {
                i += L2->val;
                L2 = L2->next;
            }
            i += carry;
            carry = i / 10;
            ans->next = new ListNode(i % 10);
            ans = ans->next;
        }
        return rev(head->next);
    }
};
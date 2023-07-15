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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *ptr1 = head;
        int count = 0;
        while (ptr1 != NULL)
        {
            count++;
            ptr1 = ptr1->next;
        }
        if (count == 2)
        {
            ptr1 = head;
            head = ptr1->next;
            ptr1->next = NULL;
            head->next = ptr1;
            return head;
        }
        if (count == k)
        {
            k = 1;
        }
        ListNode *ptr2 = head;
        ListNode *prev2 = head;
        int t = count - k;
        ListNode *prev1 = head;
        ptr1 = head;
        k--;
        while (k > 0)
        {
            prev1 = ptr1;
            ptr1 = ptr1->next;
            k--;
        }
        while (t > 0)
        {
            prev2 = ptr2;
            ptr2 = ptr2->next;
            t--;
        }
        cout << prev1->val << " " << ptr1->val << " : " << prev2->val << " " << ptr2->val;
        if (ptr1 == prev1)
        {
            ptr2->next = ptr1->next;
            prev2->next = ptr1;
            ptr1->next = NULL;
            head = ptr2;
        }
        else
        {
            ListNode *ptr = NULL;
            prev1->next = ptr2;
            prev2->next = ptr1;
            ptr = ptr2->next;
            ptr2->next = ptr1->next;
            ptr1->next = ptr;
        }
        return head;
    }
};
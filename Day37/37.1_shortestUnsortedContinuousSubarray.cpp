#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int len = n;
        if (n == 0 || n == 1)
        {
            return 0;
        }
        int end = n - 1, start = 0;
        for (int i = 0; i < n - 1; i++)
        {

            if (nums[i] <= nums[i + 1])
            {
                start++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] >= nums[i - 1])
            {
                end--;
            }
            else
            {
                break;
            }
        }
        cout << start << ":" << end << endl;
        int lg = nums[end];
        int sm = nums[start];
        for (int i = start; i < end + 1; i++)
        {
            lg = max(nums[i], lg);
            sm = min(nums[i], sm);
        }
        int first = 0;
        int last = n - 1;
        for (int i = start - 1; i >= 0; i--)
        {
            if (nums[i] <= sm)
            {
                first = i + 1;
                break;
            }
        }
        for (int i = end + 1; i < n; i++)
        {
            if (nums[i] >= lg)
            {
                last = i - 1;
                break;
            }
        }
        cout << start << ":" << end;
        if (end <= start)
        {
            return 0;
        }
        return last - first + 1;
    }
};
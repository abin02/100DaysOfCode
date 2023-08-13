#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int count = 0;
        for (int &i : nums)
            count = max(count, i);
        int ans = 0;
        while (k > 0)
        {
            ans += count++;
            k--;
        }
        return ans;
    }
};
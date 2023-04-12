#include <bits/stdc++.h>
using namespace std;
// Using median of the array
class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int m;
        int ans = 0;
        m = nums[n / 2];
        cout << m;
        for (int i = 0; i < n; i++)
        {
            ans += abs(m - nums[i]);
        }
        return ans;
    }
};
// there is another method. That is to convert two elements to any element between it,it takes difference between the two element no. of steps.

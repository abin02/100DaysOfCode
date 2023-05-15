#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                a++;
            }
            else if (nums[i] == 1)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        nums.clear();
        nums.insert(nums.end(), a, 0);
        nums.insert(nums.end(), b, 1);
        nums.insert(nums.end(), c, 2);
    }
};
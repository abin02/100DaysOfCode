#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> ab, cd;
        for (int i : nums1)
        {
            for (int j : nums2)
            {
                ab[i + j]++;
            }
        }
        for (int i : nums3)
        {
            for (int j : nums4)
            {
                cd[i + j]++;
            }
        }
        int count = 0;
        for (auto x : ab)
        {
            if (cd.find(-x.first) != cd.end())
            {
                count = count + (x.second * cd[-x.first]);
            }
        }
        return count;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int i = 0, j = n - 1;
        int maxv = min(height[i], height[j]) * (j - i);
        for (i = 0, j = n - 1; i != j;)
        {
            if (height[i] > height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
            maxv = max(maxv, min(height[i], height[j]) * (j - i));
        }
        return maxv;
    }
};
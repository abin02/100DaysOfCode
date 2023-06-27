#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int l = 0, r = n - 1;
        int area = 0;
        while (l < r)
        {
            area = max(area, (r - l) * min(height[l], height[r]));
            if (height[l] > height[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return area;
    }
};
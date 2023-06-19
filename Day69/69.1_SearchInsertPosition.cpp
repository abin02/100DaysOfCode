#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int mid, start, end;
        int n = nums.size();
        end = n - 1;
        start = 0;
        int flag = 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            cout << "Start:" << start;
            cout << "end:" << end;
            cout << "mid:" << mid << endl;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return start;
    }
};
#include <bits/stdc++.h>
using namespace std;
class MountainArray
{
public:
    int get(int index);
    int length();
};
class Solution
{
public:
    int findInMountainArray(int target, MountainArray &mountainArr)
    {
        int l = 0, r = mountainArr.length() - 1, mid = (l + r) / 2;
        int peak;
        int m;
        while (l <= r)
        {
            mid = l + ((r - l) / 2);
            m = mountainArr.get(mid);
            if (mountainArr.get(mid + 1) > m)
            {
                l = mid + 1;
            }
            else if (mountainArr.get(mid - 1) < m)
            {
                peak = mid;
                break;
            }
            else
            {
                r = mid - 1;
            }
        }
        // cout<<mountainArr.get(peak);
        l = 0, r = peak, mid = peak / 2;
        int ans = -1;
        while (l <= r)
        {
            mid = l + ((r - l) / 2);
            m = mountainArr.get(mid);
            // cout<<l<<" "<<r<<" "<<m<<endl
            if (m == target)
            {
                ans = mid;
                break;
            }
            else if (m > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ans != -1)
        {
            return ans;
        }
        l = peak + 1, r = mountainArr.length() - 1;
        while (l <= r)
        {
            mid = l + ((r - l) / 2);
            m = mountainArr.get(mid);
            // cout<<l<<" "<<r<<" "<<m<<endl;
            if (m == target)
            {
                ans = mid;
                break;
            }
            else if (m > target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return ans;
    }
};
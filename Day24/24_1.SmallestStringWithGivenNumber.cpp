#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string getSmallestString(int n, int k)
    {
        string ans(n, 'a');
        k = k - n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (k > 25)
            {
                ans[i] = 'z';
                k -= 25;
            }
            else
            {
                ans[i] = char('a' + (k));
                break;
            }
        }
        return ans;
    }
};
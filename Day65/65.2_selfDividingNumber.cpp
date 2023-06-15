#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        int flag, dig;
        for (int i = left; i <= right; i++)
        {
            int n = i;
            flag = 1;
            while (n > 0)
            {
                dig = n % 10;
                if (dig == 0)
                {
                    flag = 0;
                    break;
                }
                if (i % dig != 0)
                {
                    flag = 0;
                    break;
                }
                n /= 10;
            }
            if (flag)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
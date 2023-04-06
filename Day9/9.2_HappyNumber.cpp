#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isHappy(int n)
    {
        long ans = 0;
        unordered_map<int, int> sr;
        while (n > 0)
        {
            ans = ans + (n % 10) * (n % 10);
            n /= 10;
            // cout<<"ans:"<<ans<<" n:"<<n<<endl;
            if (n == 0 && ans > 1)
            {
                n = ans;
                ans = 0;
                if (sr.find(n) != sr.end())
                {
                    return false;
                }
                sr[n] = 1;
            }
        }
        if (ans == 1)
        {
            return true;
        }
        return false;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        int n = releaseTimes.size();
        int max = releaseTimes[0];
        char ans = keysPressed[0];
        for (int i = 1; i < n; i++)
        {
            // cout<<keysPressed[i]<<":rel:"<<releaseTimes[i] - releaseTimes[i-1]<<endl;
            if (releaseTimes[i] - releaseTimes[i - 1] > max)
            {
                max = releaseTimes[i] - releaseTimes[i - 1];
                ans = keysPressed[i];
            }
            else if ((releaseTimes[i] - releaseTimes[i - 1] == max) && int(keysPressed[i]) > int(ans))
            {
                ans = keysPressed[i];
            }
        }
        return ans;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_map<char, int> a;
        for (int i = 0; i < jewels.size(); i++)
        {
            if (a.find(jewels[i]) == a.end())
            {
                a[jewels[i]] = 1;
            }
        }
        int count = 0;
        for (int i = 0; i < stones.size(); i++)
        {
            if (a.find(stones[i]) != a.end())
            {
                count++;
            }
        }
        return count;
    }
};
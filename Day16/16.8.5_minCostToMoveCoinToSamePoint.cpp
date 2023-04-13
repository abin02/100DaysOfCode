#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCostToMoveChips(vector<int> &position)
    {
        int n = position.size();
        int cost = 0, o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            if (position[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (e > o)
        {
            return o;
        }
        else
        {
            return e;
        }
    }
};
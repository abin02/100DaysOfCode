#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {
        int ans = int((-1 + int(sqrt(1 + 8 * long(n)))) / 2);
        return ans;
    }
};
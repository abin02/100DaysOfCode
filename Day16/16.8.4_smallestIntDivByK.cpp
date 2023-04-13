#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int smallestRepunitDivByK(int k)
    {
        int n = 1;
        for (int i = 0; i < k; i++)
        {
            if (n % k == 0)
            {
                return i + 1;
            }
            n = n % k;
            n = n * 10 + 1;
        }
        return -1;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> a(n, true);
        int count = 0;
        for (int i = 2; i * i < n; i++)
        {
            if (a[i] == true)
            {
                for (int j = i * i; j < n; j += i)
                {
                    a[j] = false;
                }
            }
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i] == true)
            {
                count++;
            }
        }
        return count;
    }
};
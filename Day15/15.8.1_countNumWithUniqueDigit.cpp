#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countNumbersWithUniqueDigits(int n)
    {
        int sum = 10;
        int c = 9;
        if (n == 0)
        {
            return 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            c *= 9 - i;
            sum += c;
        }
        return sum;
    }
};

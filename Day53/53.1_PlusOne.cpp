#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        int i;
        for (i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i] += 1;
                break;
            }
            else
            {
                digits[i] = 0;
            }
        }
        if (i == -1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
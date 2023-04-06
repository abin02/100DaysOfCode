#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int rev = 0;
        if ((x % 10 == 0 || x < 0) && x != 0)
        {
            return false;
        }
        while (rev <= x)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
            if (rev == x)
            {
                return true;
            }
        }
        if (rev / 10 == x)
        {
            return true;
        }
        return false;
    }
};
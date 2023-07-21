#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0;
        while (n >= 1)
        {
            if (n % 3 == 0)
            {
                sum += n;
            }
            else if (n % 5 == 0)
            {
                sum += n;
            }
            else if (n % 7 == 0)
            {
                sum += n;
            }
            n--;
        }
        return sum;
    }
};
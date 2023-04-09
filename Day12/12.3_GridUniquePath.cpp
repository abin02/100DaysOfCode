#include <bits/stdc++.h>
using namespace std;
int uniquePaths(int A, int B)
{
    long long n = A - 1, m = B - 1, num = 1, den = 1;
    long long k = min(m, n);
    n = m + n;
    for (; k > 0; k--, n--)
    {
        num *= n;
        den *= k;
        if (num % den == 0)
        {
            num /= den;
            den = 1;
        }
    }
    return int(num);
}
#include <bits/stdc++.h>
using namespace std;
int gcd(int A, int B)
{
    if (A == 0 || B == 0)
    {
        return max(A, B);
    }
    if (A < B)
    {
        swap(A, B);
    }
    int n;
    while (1)
    {
        n = A % B;
        if (A % B != 0)
        {
            A = B;
            B = n;
        }
        else
        {
            break;
        }
    }
    return B;
}

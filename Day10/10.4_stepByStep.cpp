#include <bits/stdc++.h>
using namespace std;
int solve(int A)
{
    A = abs(A);
    int i = 1;
    int cur = 0;
    while (cur < A || (cur - A) & 1)
    {
        cur = cur + i;
        i++;
    }
    return i - 1;
}

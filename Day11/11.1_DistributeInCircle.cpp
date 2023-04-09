#include <bits/stdc++.h>
using namespace std;
int olve(int A, int B, int C)
{
    int a = (A + C - 1) % B;
    if (a == 0)
    {
        return B;
    }
    return a;
}

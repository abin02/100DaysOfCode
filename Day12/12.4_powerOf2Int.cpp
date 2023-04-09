#include <bits/stdc++.h>
using namespace std;
int isPower(int A)
{
    if (A == 1)
    {
        return true;
    }
    int c;
    for (int i = 2; i * i <= A; i++)
    {
        c = log(A) / log(i);
        if (A == pow(i, c))
        {
            return true;
        }
    }
    return false;
}

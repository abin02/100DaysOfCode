#include <bits/stdc++.h>
using namespace std;
int Solution(string A)
{
    int j = A.size() - 1, i = 0, k = 0;
    while (i < j)
    {
        if (A[i] == A[j])
        {
            i++;
            j--;
        }
        else
        {
            k++;
            i = k;
            j = A.size() - 1;
        }
    }
    return k;
}

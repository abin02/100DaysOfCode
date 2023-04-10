#include <bits/stdc++.h>
using namespace std;
void arrange(vector<int> &A)
{
    int n = A.size();
    int temp;
    for (int i = 0; i < n; i++)
    {
        A[i] = A[i] + (A[A[i]] % n) * n;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] /= n;
    }
}

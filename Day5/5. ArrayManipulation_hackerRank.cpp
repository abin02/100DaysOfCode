#include <bits/stdc++.h>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries)
{
    vector<long> a(n + 1, 0);
    int p = queries.size();
    for (int i = 0, j = 0; i < p; i++, j += 2)
    {
        a[queries[i][0] - 1] += queries[i][2];
        a[queries[i][1]] -= queries[i][2];
    }
    long lg = a[0];
    for (int i = 1; i < n + 1; i++)
    {
        a[i] += a[i - 1];
        lg = max(lg, a[i]);
    }
    return lg;
}
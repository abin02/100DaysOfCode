#include <bits/stdc++.h>
using namespace std;
vector<int> allFactors(int A)
{
    vector<int> a;
    int s;
    for (int i = 1; i * i <= A; i++)
    {
        if (A % i == 0)
        {
            s = A / i;
            if (s == i)
            {
                a.push_back(i);
            }
            else
            {
                a.push_back(i);
                a.push_back(s);
            }
        }
    }
    sort(a.begin(), a.end());
    return a;
}

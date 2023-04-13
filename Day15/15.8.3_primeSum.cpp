#include <bits/stdc++.h>
using namespace std;
vector<int> primesum(int A)
{
    int count = 0;
    vector<int> ans;
    if (A == 0)
    {
        ans.push_back(0);
        ans.push_back(0);
        return ans;
    }

    bool a[A + 1];
    a[0] = false;
    a[1] = false;
    for (int i = 2; i <= A; i++)
    {
        a[i] = true;
    }
    for (int i = 2; i * i <= A; i++)
    {
        if (a[i] == true)
            for (int j = i * i; j <= A; j += i)
            {
                a[j] = false;
            }
    }

    for (int i = 2; i < A; i++)
    {
        if (a[i] && a[A - i])
        {
            ans.push_back(i);
            ans.push_back(A - i);
            break;
        }
    }
    return ans;
}

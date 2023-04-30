#include <bits/stdc++.h>
using namespace std;
int solve(string A)
{
    int flag = 1;
    int f = 0, e = A.length() - 1;
    // cout<<A[12]<<" avc";
    // cout<<f<<":"<<e<<endl;
    while (f < e)
    {
        if (A[f] == A[e])
        {
            f++;
            e--;
            // cout<<f<<":"<<e<<endl;
        }
        else if (flag == 0)
        {
            return 0;
        }
        else
        {
            flag = 0;
            if (A[f] == A[e - 1] && A[f + 1] == A[e - 2])
            {
                e--;
            }
            else
            {
                f++;
            }
        }
    }
    return 1;
}

#include <bits/stdc++.h>
using namespace std;
string saddBinary(string A, string B)
{
    int s, m = A.size() - 1, n = B.size() - 1, c = 0;
    string ans;
    while (m >= 0 && n >= 0)
    {
        // cout<< (int(A[m])-'0')<<":"<<(int(B[n])-'0')<<endl;
        if ((int(A[m]) - '0') + (int(B[n]) - '0') + c == 1)
        {
            c = 0;
            ans = '1' + ans;
        }
        else if ((int(A[m]) - '0') + (int(B[n]) - '0') + c == 2)
        {
            ans = '0' + ans;
            c = 1;
        }
        else if ((int(A[m]) - '0') + (int(B[n]) - '0') + c == 0)
        {
            ans = '0' + ans;
        }
        else
        {
            c = 1;
            ans = '1' + ans;
        }
        m--;
        n--;
    }
    while (m >= 0)
    {
        if (c + (int(A[m]) - '0') > 1)
        {
            ans = '0' + ans;
        }
        else if (c + (int(A[m]) - '0') == 1)
        {
            ans = '1' + ans;
            c = 0;
        }
        else
        {
            ans = '0' + ans;
        }
        m--;
    }
    while (n >= 0)
    {
        // cout<<c<<endl
        if (c + (int(B[n]) - '0') > 1)
        {
            ans = '0' + ans;
        }
        else if (c + (int(B[n]) - '0') == 1)
        {
            ans = '1' + ans;
            c = 0;
        }
        else
        {
            ans = '0' + ans;
        }
        n--;
    }
    if (c > 0)
    {
        ans = '1' + ans;
    }
    return ans;
}

#include <bits/stdc++.h>
using namespace std;
string convertToTitle(int A)
{
    string ans;
    while (A)
    {
        ans = char((A - 1) % 26 + 'A') + ans;
        A = (A - 1) / 26;
    }
    return ans;
}

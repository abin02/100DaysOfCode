#include <bits/stdc++.h>
using namespace std;
int solve(string A)
{
    int count = 0;
    char ch;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        ch = tolower(A[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count += n - i;
        }
    }
    return count % 10003;
}

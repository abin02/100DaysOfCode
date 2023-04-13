#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string A)
{
    int n = A.length();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (!iswalnum(A[s]))
        {
            s++;
        }
        else if (!iswalnum(A[e]))
        {
            e--;
        }
        if (iswalnum(A[e]) && iswalnum(A[s]))
        {
            if (tolower(A[s]) != tolower(A[e]))
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
    }
    return 1;
}

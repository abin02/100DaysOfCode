#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string breakPalindrome(string palindrome)
    {
        int n = palindrome.size();
        if (n == 1)
        {
            return "";
        }
        for (int i = 0; i < n; i++)
        {
            if (palindrome[i] != 'a' && (n % 2 == 0 || (n / 2) != i))
            {
                palindrome[i] = 'a';
                break;
            }
            else if (i == n - 1)
            {
                palindrome[i] = 'b';
            }
        }
        return palindrome;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> a;
        int n = s.length();
        for (int i = 0, j = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            string temp = "";
            while (i < n && s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            a.push_back(temp);
            j = 0;
        }
        reverse(a.begin(), a.end());
        string ans;
        for (int i = 0; i < a.size(); i++)
        {
            ans += a[i];
            if (i < a.size() - 1)
            {
                ans += ' ';
            }
        }
        return ans;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> a;
        int n = ransomNote.size(), m = magazine.size();
        for (int i = 0; i < m; i++)
        {
            if (a.find(magazine[i]) == a.end())
            {
                a[magazine[i]] = 1;
            }
            else
            {
                a[magazine[i]] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a.find(ransomNote[i]) != a.end() && a[ransomNote[i]] > 0)
            {
                a[ransomNote[i]] -= 1;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
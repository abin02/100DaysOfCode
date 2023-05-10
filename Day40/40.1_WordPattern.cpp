#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        int n = pattern.size(), m = s.size();
        unordered_map<string, char> a;
        vector<char> alp;
        string str, pat = " ";
        int p = 0;
        int start, end = -1;
        do
        {
            start = end + 1;
            end = s.find(pat, start);
            str = s.substr(start, end - start);
            cout << str << ":" << p << endl;
            if (a.find(str) != a.end())
            {
                if (a.at(str) != pattern[p])
                {
                    return false;
                }
            }
            else if (find(alp.begin(), alp.end(), pattern[p]) != alp.end())
            {
                return false;
            }
            else
            {
                a[str] = pattern[p];
                alp.push_back(pattern[p]);
            }
            p++;
        } while (end != -1);
        if (p != pattern.size())
        {
            return false;
        }
        return true;
    }
};
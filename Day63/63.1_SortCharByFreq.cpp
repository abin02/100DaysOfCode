#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // static bool cmp(char a, char b){
    //     return a>b;
    // }
    string frequencySort(string s)
    {
        unordered_map<char, int> ch;
        string ans = "";
        for (auto x : s)
        {
            ch[x]++;
        }
        auto cmp = [&ch](char a, char b)
        {
            if (ch[a] > ch[b])
            {
                return true;
            }
            else if (ch[a] == ch[b] && a > b)
            {
                return true;
            }
            else
            {
                return false;
            }
        };
        sort(s.begin(), s.end(), cmp);
        return s;
    }
};
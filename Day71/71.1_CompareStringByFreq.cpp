#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words)
    {
        vector<int> precom(300, 0);
        vector<int> ans;
        int n = words.size();
        for (string str : words)
        {
            int cur = 0;
            char mi = 'z';
            for (char ch : str)
            {
                if (ch < mi)
                {
                    cur = 1;
                    mi = ch;
                }
                else if (ch == mi)
                {
                    cur++;
                }
            }
            while (cur > 0)
            {
                precom[cur - 1] += 1;
                cur--;
            }
        }
        int i = 0;
        for (string str : queries)
        {
            int cur = 0;
            char mi = 'z';
            for (char ch : str)
            {
                if (ch < mi)
                {
                    cur = 1;
                    mi = ch;
                }
                else if (ch == mi)
                {
                    cur++;
                }
            }
            ans.push_back(precom[cur]);
            i++;
        }
        return ans;
    }
};
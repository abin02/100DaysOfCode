#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> ch;
        ch['b'] = 0;
        ch['a'] = 0;
        ch['l'] = 0;
        ch['o'] = 0;
        ch['n'] = 0;
        int n = text.size();
        int mini = 0;
        while (n >= 0)
        {
            if (text[n] == 'b' || text[n] == 'a' || text[n] == 'l' || text[n] == 'o' || text[n] == 'n')
            {
                ch[text[n]] += 1;
            }
            n--;
        }
        mini = min(ch['b'], ch['a']);
        mini = min(mini, ch['l'] / 2);
        mini = min(mini, ch['o'] / 2);
        mini = min(mini, ch['n']);
        return mini;
    }
};
// Max num of balloons shorter and cleaner solution
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> ch;
        for (char c : text)
        {
            ch[c]++;
        }
        return min({ch['a'], ch['b'], ch['n'], ch['l'] / 2, ch['o'] / 2});
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rec(string r, string dig, string numchar[], vector<string> &ans)
    {

        if (r.length() == dig.length())
        {
            ans.push_back(r);
        }
        else
        {
            int i = r.length();
            // cout<<int(dig[i]) - '0' ;
            // cout<<;
            for (int j = 0; j < numchar[int(dig[i]) - '0'].length(); j++)
            {
                // cout<<r+ char(numchar[int(dig[i]) -'0'][j])<<endl;
                rec(r + char(numchar[int(dig[i]) - '0'][j]), dig, numchar, ans);
            }
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        string r = "";
        string numchar[10];
        numchar[0] = "";
        numchar[1] = "";
        numchar[2] = "abc";
        numchar[3] = "def";
        numchar[4] = "ghi";
        numchar[5] = "jkl";
        numchar[6] = "mno";
        numchar[7] = "pqrs";
        numchar[8] = "tuv";
        numchar[9] = "wxyz";
        if (digits.length() != 0)
        {
            Solution::rec(r, digits, numchar, ans);
        }
        return ans;
    }
};
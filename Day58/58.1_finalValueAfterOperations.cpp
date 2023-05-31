#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int x = 0, n = operations.size();
        // cout<<n;
        for (int i = 0; i < n; i++)
        {
            if (operations[i] == "--X" || operations[i] == "X--")
            {
                x--;
                // cout<<"-1 :";
            }
            else if (operations[i] == "X++" || operations[i] == "++X")
            {
                x++;
                // cout<<"+1:";
            }
        }
        return x;
    }
};
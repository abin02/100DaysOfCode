#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSegments(string s)
    {
        stringstream str(s);
        s;
        int count = 0;
        while (str >> s)
        {
            count++;
        }
        return count;
    }
};
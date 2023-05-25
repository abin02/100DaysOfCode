#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int count = 0;
        int max = 0;
        int n = sentences.size();
        for (int i = 0; i < n; i++)
        {
            stringstream str(sentences[i]);
            string stri;
            count = 0;
            while (str >> stri)
            {
                count++;
            }
            if (count > max)
            {
                max = count;
            }
        }
        return max;
    }
};
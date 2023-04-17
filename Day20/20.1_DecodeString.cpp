#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string repeatString(string s, int n)
    {
        int m = s.size();
        stack<char> p;
        int f, l, q;
        string str = "";
        for (int i = 0; i < m; i++)
        {
            f = 0;
            q = 0;
            if (isdigit(s[i]))
            {
                while (isdigit(s[i]))
                {
                    q = q * 10 + (s[i] - '0');
                    i++;
                }
                cout << "q:" << q << endl;
                if (f == 0)
                {
                    f = i + 1;
                    l = 0;
                }
                do
                {
                    if (s[i] == '[')
                    {
                        p.push(s[i]);
                    }
                    else if (s[i] == ']')
                    {
                        p.pop();
                    }
                    l++;
                    i++;
                } while (!p.empty());
                // cout<<"l:"<<l-2<<endl;
                i--;
                str += repeatString(s.substr(f, l - 2), q);
            }
            else
            {
                str += s[i];
            }
        }
        string str1;
        for (int j = 0; j < n; j++)
        {
            str1 += str;
        }
        return str1;
    }
    string decodeString(string s)
    {
        return repeatString(s, 1);
    }
};
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<long long> ans;
    vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    long long a, b;
    for (string x : tokens)
    {
        if (x.size() > 1 || isdigit(x[0]))
        {
            ans.push(stoi(x));
        }
        else
        {
            b = ans.top();
            ans.pop();
            a = ans.top();
            ans.pop();
            switch (x[0])
            {
            case '*':
                ans.push(a * b);
                break;
            case '+':
                ans.push(a + b);
                break;
            case '-':
                ans.push(a - b);
                break;
            case '/':
                ans.push(a / b);
                break;
            default:
                break;
            }
            cout << ans.top() << " : ";
        }
    }
    cout << ans.top();
}

// Code solved in leetcode
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> ans;
        int a, b;
        for (string x : tokens)
        {
            if (x.size() > 1 || isdigit(x[0]))
            {
                a = stoi(x);
                ans.push(a);
                continue;
            }

            else
            {
                b = ans.top();
                ans.pop();
                a = ans.top();
                ans.pop();
                switch (x[0])
                {
                case '*':
                    ans.push(int(a * b));
                    break;
                case '+':
                    ans.push(int(a + b));
                    break;
                case '-':
                    ans.push(int(a - b));
                    break;
                case '/':
                    ans.push(int(a / b));
                    break;
                default:
                    break;
                }
            }
        }
        return ans.top();
    }
};
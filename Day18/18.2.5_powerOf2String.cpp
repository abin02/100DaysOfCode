#include <bits/stdc++.h>
using namespace std;
string longDiv(string a, int b)
{
    string ans;
    int temp, i = 0;
    temp = a[i] - '0';
    while (temp < b)
    {
        temp = temp * 10 + (a[++i] - '0');
    }
    while (i < a.length())
    {
        ans += ((temp / b) + '0');
        temp = (temp % b) * 10 + (a[++i] - '0');
    }
    // if(ans.length()==0){
    //     return "0";
    // }
    return ans;
}

int power(string A)
{
    if (A == "1")
    {
        return 0;
    }
    while (A != "1")
    {
        if (A.back() % 2 != 0)
        {
            return 0;
        }
        A = longDiv(A, 2);
    }
    return 1;
}
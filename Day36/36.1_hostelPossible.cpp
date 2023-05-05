#include <bits/stdc++.h>
using namespace std;
bool hotel(vector<int> &arrive, vector<int> &depart, int K)
{
    int n = arrive.size();
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    int c = 0;
    for (int i = 0, j = 0; i < n;)
    {
        if (arrive[i] < depart[j])
        {
            c++;
            i++;
        }
        else if (arrive[i] > depart[j])
        {
            c--;
            j++;
        }
        else
        {
            j++;
            i++;
        }
        // cout<<"c:"<<c<<endl;
    }
    if (c > K)
    {
        return false;
    }
    else
    {
        return true;
    }
}
#include <bits/stdc++.h>
using namespace std;
void rec(vector<int> arr, vector<int> ans, int i)
{
    if (i >= arr.size())
    {
        if (ans.size() == 0)
        {
            cout << "{}" << endl;
            return;
        }
        cout << "{ ";
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << "}" << endl;
        return;
    }
    rec(arr, ans, i + 1);
    ans.push_back(arr[i]);
    rec(arr, ans, i + 1);
    return;
}
int main()
{
    vector<int> ans;
    vector<int> arr = {1, 2, 3};
    rec(arr, ans, 0);
    return 0;
}
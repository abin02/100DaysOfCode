#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {8, 4, 2, 10, 10, 7, 10, 10, 8, 1, 10, 5, 4, 4, 2, 10, 10, 5, 1, 2, 7, 4, 2, 4, 10, 10, 10, 1};
    int n = 28;
    int k = 27;
    vector<int> dp(n);
    if (n <= 1)
    {
        cout << 0;
        return 0;
    }
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1] + abs(arr[i - 1] - arr[i]);
        for (int j = 2; i - j >= 0 && j <= k; j++)
        {
            dp[i] = min(dp[i - j] + abs(arr[i - j] - arr[i]), dp[i]);
        }
    }
    cout << dp[n - 1];
}
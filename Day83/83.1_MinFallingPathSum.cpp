#include <bits/stdc++.h>
using namespace std;
// recusion dp
//  int rec(vector<vector<int>>m, int x, int n,vector<vector<int>> &dp){
//      if(n==0){
//          return m[n][x];
//      }
//      if(dp[n][x] != -1){
//          return dp[n][x];
//      }
//      int up = m[n][x] + rec(m,x,n-1,dp);
//      int right=INT_MAX;
//      int left=INT_MAX;
//      if(x<m[0].size()-1){
//          right = m[n][x] + rec(m,x+1,n-1,dp);
//      }
//      if(x>0){
//          left = m[n][x] + rec(m,x-1,n-1,dp);
//      }
//      return dp[n][x] = min(up,min(left,right));
//  }

// tabular

int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix[0].size();
    int m = matrix.size();
    int mini;
    vector<vector<int>> dp(m, vector<int>(n, -1));
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            mini = min(matrix[0][i], mini);
        }
        return mini;
    }
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = matrix[0][i];
    }
    for (int i = 1; i < m; i++)
    {
        mini = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            int up = dp[i - 1][j], left = INT_MAX, right = INT_MAX;
            if (j > 0)
            {
                left = dp[i - 1][j - 1];
            }
            if (j < n - 1)
            {
                right = dp[i - 1][j + 1];
            }
            dp[i][j] = matrix[i][j] + min(up, min(right, left));
            mini = min(dp[i][j], mini);
        }
    }
    return mini;
}
// space optimization

int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix[0].size();
    int m = matrix.size();
    int mini;
    vector<int> dp1(n);
    vector<int> dp2(n);
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            mini = min(matrix[0][i], mini);
        }
        return mini;
    }
    for (int i = 0; i < n; i++)
    {
        dp1[i] = matrix[0][i];
    }
    for (int i = 1; i < m; i++)
    {
        mini = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            int up = dp1[j], left = INT_MAX, right = INT_MAX;
            if (j > 0)
            {
                left = dp1[j - 1];
            }
            if (j < n - 1)
            {
                right = dp1[j + 1];
            }
            dp2[j] = matrix[i][j] + min(up, min(right, left));
            mini = min(dp2[j], mini);
        }
        dp1 = dp2;
    }
    return mini;
}
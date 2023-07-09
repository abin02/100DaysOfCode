#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rec(int r1, int r2, int x, int n, int m, vector<vector<vector<int>>> &dp, vector<vector<int>> &grid)
    {
        if (dp[x][r1][r2] != -1)
        {
            return dp[x][r1][r2];
        }
        if (x == m - 1)
        {
            if (r1 == r2)
            {
                return dp[x][r1][r2] = grid[x][r1];
            }
            else
            {
                return dp[x][r1][r2] = grid[x][r1] + grid[x][r2];
            }
        }

        int maxi = 0;
        int val = 0;
        if (r1 == r2)
        {
            val = grid[x][r1];
        }
        else
        {
            val = grid[x][r1] + grid[x][r2];
        }
        maxi = 0;
        for (int i = -1; i < 2; i++)
        {
            if (r1 + i < 0 || r1 + i > n - 1)
            {
                continue;
            }
            for (int j = -1; j < 2; j++)
            {
                if (r2 + j < 0 || r2 + j > n - 1)
                {
                    continue;
                }
                maxi = max(rec(r1 + i, r2 + j, x + 1, n, m, dp, grid), maxi);
            }
        }
        return dp[x][r1][r2] = val + maxi;
    }
    int cherryPickup(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return rec(0, n - 1, 0, n, m, dp, grid);
    }
};

//tabular method
int cherryPickup(vector<vector<int>>& grid) {
        int m= grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(n,0)));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    dp[m-1][i][j] = grid[m-1][i];
                    continue;
                }
                dp[m-1][i][j] = grid[m-1][i] + grid[m-1][j];
            }
        }
        int maxi = 0,val=0;
        for(int x=m-2;x>=0;x--){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    maxi = 0;
                    if(i==j){
                        val = grid[x][i];
                    }
                    else{
                        val = grid[x][i] + grid[x][j];
                    }
                    for(int p=-1;p<2;p++){
                        if(i+p<0 || i+p>n-1){
                            continue;
                        }
                        for(int q=-1;q<2;q++){
                            if(j+q<0 || j+q>n-1){
                                continue;
                            }
                            maxi = max(maxi,val + dp[x+1][i+p][j+q]);
                        }
                    }
                    dp[x][i][j] = maxi ;
                }
            }
        }
        return dp[0][0][n-1];
    }
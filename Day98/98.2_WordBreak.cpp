#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rec(int i,string s, vector<string>& wordDict, vector<int>& dp){
        int n = s.size();
        if(i>n){
            return false;
        }
        if(i == n){
            return true;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int ans = 0;
        for(string x : wordDict){
            if(x.size()+i>s.size()){
                continue;
            }
            else if(s.substr(i,x.size()) == x){
                ans = rec(i+x.size(),s,wordDict,dp);
                dp[i] = max(ans,dp[i]);
            }
        }
        dp[i] = max(dp[i],ans);
        return dp[i];
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<int> dp(n+1,-1);
        dp[n] = 1;
        rec(0,s,wordDict,dp);
        return dp[0];
    }
};
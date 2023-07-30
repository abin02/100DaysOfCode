#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rec(string s,int n,vector<int> &dp){
        if(dp[n] != -1){
            return dp[n];
        }  
        if(n>s.size() || s[n] == '0'){
            return 0;
        }
        int two = 0;
        int one = rec(s,n+1,dp);
        if(n+1 <s.size() && ((s[n] == '1' )||( s[n] == '2' && s[n+1] < '7')) ){
            two = rec(s,n+2,dp);
        }
        return dp[n]=one + two;
    }
    int numDecodings(string s) {
        int n = s.size();
        if(n == 0){
            return 0;
        }
        vector<int> dp(n+1,-1);
        dp[n]=1;
        return rec(s,0,dp);
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     void rec(int n, int k, int i,vector<int> &sub,vector<vector<int>> &ans){
        int s = sub.size();
        if(s == k){
            ans.push_back(sub);
            return;
        }
        if(n+1 == i){
            return;
        }
        sub.push_back(i);
        rec(n,k,i+1,sub,ans);
        sub.pop_back();
        rec(n,k,i+1,sub,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> sub;
        rec(n,k,1,sub,ans);
        return ans;
    }
};
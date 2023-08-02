#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rec(vector<int>& nums,vector<vector<int>> &ans,int n){
        if(n == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = n;i<nums.size();i++){
            swap(nums[i],nums[n]);
            rec(nums,ans,n+1);
            swap(nums[i],nums[n]);
        }
        return ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        rec(nums,ans,0);
        return ans;
    }
};
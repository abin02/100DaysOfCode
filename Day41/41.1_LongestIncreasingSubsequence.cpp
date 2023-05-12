#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,0);
        pre[n-1] = 1;
        for(int i = n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    pre[i] = max(pre[i],pre[j] + 1);
                }
                else{
                    pre[i] = max(1,pre[i]);
                }
            }
        }
        int lg=0;
        for(int i =0;i<n;i++){
            lg = max(lg,pre[i]);
        }
        return lg;
    }
};
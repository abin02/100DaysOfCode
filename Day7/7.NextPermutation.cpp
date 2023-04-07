#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int brkpt=-1;
        for(int i = n-1; i > 0 ; i--){
            if(nums[i] > nums[i-1]){
                brkpt = i-1;
                break;
            }
        }
        if(brkpt == -1){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(int i = n-1; i >= 0; i--){
                if(nums[i] > nums[brkpt]){
                    swap(nums[i],nums[brkpt]);
                    reverse(nums.begin()+brkpt+1,nums.end());
                    break;
                }
            }
        }
    }
};
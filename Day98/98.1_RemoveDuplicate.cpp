#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        int count =1;
        for(int i=1;i<n;i++){
            if(nums[i] != nums[j]){
                j++;
                count = 1;
                nums[j] = nums[i];
            }
            else if(count<2){
                count++;
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
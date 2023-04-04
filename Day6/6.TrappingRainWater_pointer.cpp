#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int ans = 0;
        int l = 0, r = n-1;
        int rm = height[r] , lm = height[l];
        while(l<=r){
            lm = max(lm, height[l]);
            rm = max(rm, height[r]);
            if(lm<= rm){
                ans += lm-height[l];
                l++;
            }
            else{
                ans += rm - height[r];
                r--;
            }
        }
        return ans;
    }
};
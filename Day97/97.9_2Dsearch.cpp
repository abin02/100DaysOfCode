#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int s=0,e=m-1,l=0,r=n-1;
        int mid1,mid2;
        while(s<=e){
            mid1 = (s+e)/2;
            if(matrix[mid1][0] == target){
                return true;
            }
            if(matrix[mid1][0] < target && matrix[mid1][n-1] >=target){
                break;
            }
            if(matrix[mid1][0]>target){
                e=mid1-1;
            }
            else{
                s=mid1+1;
            }
        }
        while(l<=r){
            mid2 = (l+r)/2;
            if(matrix[mid1][mid2] == target){
                return true;
            }
            if(matrix[mid1][mid2]>target){
                 r= mid2 -1;
            }
            else{
                l = mid2+1;
            }
        }
        return false;
    }
};
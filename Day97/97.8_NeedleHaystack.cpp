#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        for(int i=0;i<haystack.size();i++){
            int s = i;
            int j;
            for(j=0;j<needle.size();j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == needle.size()){
                ans = s;
                break;
            }
        }
        return ans;
    }
};
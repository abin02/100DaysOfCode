#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n,"");
        for(int i =0; i< n; i++){
            if((i+1)%3 == 0){
                ans[i] = ans[i]+"Fizz";
            }
            if((i+1)%5 == 0){
                ans[i] = ans[i]+"Buzz";
            }
            if((i+1)%3 != 0 && (i+1)%5 != 0){
                ans[i] = ans[i]+to_string(i+1);
            }
        }
        return ans;
    }
};
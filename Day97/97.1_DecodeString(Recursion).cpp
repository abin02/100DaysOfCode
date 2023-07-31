#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rec(int &i,string s,int num){
    string ans="";
    i++;
    for(;i<s.size();i++){
        if(isdigit(s[i])){
            int nub=0;
            while(isdigit(s[i])){
                nub = nub*10+(s[i]-'0');
                i++;
            }
            ans += rec(i,s,nub);
            continue;
        }
        if(s[i] == ']'){
            string copy = ans;
            while(num-1>0){
                ans += copy;
                num--;
            }
            return ans;
        }
        ans += s[i];
    }
    return ans;
}
    string decodeString(string s) {
        int n = s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                int nub=0;
                while(isdigit(s[i])){
                    nub = nub*10+(s[i]-'0');
                    i++;
                }
                ans += rec(i,s,nub);    
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};
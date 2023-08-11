#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char, int> ch;
        for(char x :s1){
            ch[x]++;
        }
        int count = 0;
        for(int i =0;i<s2.size();i++){
            if(s1[i] != s2[i]){count++;}
            if(ch[s2[i]] == 0 || count >=3){
                return false;
            }
            ch[s2[i]]--;
        } 
        return true;
    }
};
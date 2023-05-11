#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello, my name is abin and this is a string.";
    stringstream str(s);
    string ch;
    while(str>>ch){
        cout<<ch<<"$";
    }
}
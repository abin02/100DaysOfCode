#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        int lg = 0, imax = 0, jmax = 0;
        int arr[n][n];
        for (int p = 0; p < n; p++)
        {
            for (int i = 0, j = p; j < n; j++, i++)
            {
                if (p == 0)
                {
                    arr[i][j] = 1;
                }
                else if (s[i] == s[j] && (j - i <= 1 || arr[i + 1][j - 1] == 1))
                {
                    arr[i][j] = 1;
                    imax = i;
                    jmax = j;
                }
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
        //    for(int i=0;i<n;i++){
        //        for(int j=0;j<n;j++){
        //            if(j<i){
        //                cout<<"  ";
        //            }
        //            else{
        //                cout<<arr[i][j]<<" ";
        //            }
        //        }
        //        cout<<endl;
        //    }
        string ans = s.substr(imax, jmax - imax + 1);
        return ans;
    }
};
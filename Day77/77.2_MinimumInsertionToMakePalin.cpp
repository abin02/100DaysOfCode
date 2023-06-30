#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minInsertions(string s)
    {
        int n = s.size();
        int arr[n][n];
        memset(arr, 0, sizeof(arr));
        for (int p = 1; p < n; p++)
        {
            for (int i = 0, j = p; j < n; i++, j++)
            {
                if (s[i] == s[j])
                {
                    arr[i][j] = arr[i + 1][j - 1];
                }
                else
                {
                    arr[i][j] = min(arr[i][j - 1], arr[i + 1][j]) + 1;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return arr[0][n - 1];
    }
};
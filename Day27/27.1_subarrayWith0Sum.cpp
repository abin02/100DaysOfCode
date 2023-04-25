#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int, int> store;
        store[0] = 1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (store.find(sum) != store.end())
            {
                return true;
            }
            store[sum] = 1;
        }
        return false;
    }
};
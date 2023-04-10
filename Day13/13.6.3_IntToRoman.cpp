#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        string a[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int arr[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string s;
        for (int i = 0; num > 0; i++)
        {
            while (num >= arr[i])
            {
                s += a[i];
                num -= arr[i];
            }
        }
        return s;
    }
};
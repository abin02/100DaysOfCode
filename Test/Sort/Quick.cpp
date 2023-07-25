#include <bits/stdc++.h>
using namespace std;
void quick(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int piv = s;
    int i = s, j = e;
    while (i < j)
    {
        while (arr[i] <= arr[piv] && i <= e - 1)
        {
            i++;
        }
        while (arr[j] > arr[piv] && j >= s + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[piv], arr[j]);
    piv = j;
    quick(arr, piv + 1, e);
    quick(arr, s, piv - 1);
}
int main()
{
    // cout<<"hello";
    vector<int> arr = {5, 2, 3, 1};
    int n = arr.size();
    quick(arr, 0, n - 1);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}
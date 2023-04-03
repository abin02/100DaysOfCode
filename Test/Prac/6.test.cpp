#include <bits/stdc++.h>
using namespace std;
int power(int a, int n)
{
    if (n == 1)
    {
        return a;
    }
    return a * power(a, n - 1);
}

int main()
{
    cout << power(3, 3);
    return 1;
}

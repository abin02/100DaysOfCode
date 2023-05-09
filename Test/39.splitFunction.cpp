#include <bits/stdc++.h>
using namespace std;
void tokenize(string s, string del = " ")
{
    int start, end = -1 * del.size();
    do
    {
        start = end + del.size();
        end = s.find(del, start);
        cout << s.substr(start, end - start) << endl;
    } while (end != -1);
}
int main()
{
    string a;
    getline(cin,a);
    tokenize(a, " ");
}
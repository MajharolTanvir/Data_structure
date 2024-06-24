#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (string value : v)
    {
        value.front() = value.front() - 32;
        cout << value << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x, y;
    cin >> x >> y;
    replace(v.begin(), v.end(), x, y);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int z;
    cin >> z;
    auto it = find(v.begin(), v.end(), z);
    cout << it - v.begin() << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int summation = 0;
        for (int j = l - 1; j < r; j++)
        {
            summation = summation + v[j];
        }
        cout << summation << endl;
    }
    return 0;
}
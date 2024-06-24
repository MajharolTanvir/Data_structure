#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int t;
    cin >> t;
    vector<int> arr2(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr2[i];
    }
    int position;
    cin >> position;
    arr1.insert(arr1.begin() + position, arr2.begin(), arr2.end());
    for (int i = 0; i < n + t; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
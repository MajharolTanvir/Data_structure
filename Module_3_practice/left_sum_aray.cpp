#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> leftSum(n, 0);
    for (int i = 1; i < n; i++)
    {
        leftSum[i] = leftSum[i - 1] + i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << leftSum[i] << " ";
    }
    return 0;
}
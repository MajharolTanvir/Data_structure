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

    int l = 0, r = n - 1;
    int mid = (l + r) / 2;
    int before_sum = 0, after_sum = 0;
    for (int i = 0; i < mid; i++)
    {
        before_sum = before_sum + arr[i];
    }
    for (int i = mid + 1; i < n; i++)
    {
        after_sum = after_sum + arr[i];
    }
    if(before_sum == after_sum){
        cout << mid << endl;
    }
    return 0;
}
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
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid] - 1 == x || arr[mid] + 1 == x){
                cout << "true" << endl;
            }
        }
        else if (arr[mid] < x)
            l = mid + l;
        else if (arr[mid] > x)
            r = mid - r;
        else
            cout << "false";
    }

    return 0;
}
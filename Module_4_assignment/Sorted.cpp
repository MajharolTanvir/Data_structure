#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        bool isSorted = true;
        for (int j = 1; j < n; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                isSorted = false;
            }
        }
        if (isSorted == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
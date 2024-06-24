#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int summation = 0;
    // O(n)
    for (int i = 0; i < n; i++)
    {
        // No matter what code is write in the loop
        if (i % 2 == 0)
        {
            summation += arr[i];
        }
    }
    cout << summation << " ";
    return 0;
}

/**
 * Checking value
 * 5
 * 10 20 30 40 50
 */

/**
 * Mathematical proof
 * O (n);
 * O (n);
 * ------- Result
 * O (n+n);
 * o (2n);
 * O (n); <- FInal Result
 */
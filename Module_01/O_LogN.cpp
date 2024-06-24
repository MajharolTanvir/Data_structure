#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // o (logN)
    // while (n > 0)
    // {
    //     int digit = n % 10;
    //     cout << digit << endl;
    //     n /= 10;
    // }

    // o (logN)

    for (int i = 1; i <= n; i = i * 2)
    {
        cout << i << endl;
    }

    return 0;
}

/**
 * Checking While loop
 * 123213
 * Checking for loop
 * 100
 */

/**
 * Each of this while loop and for loop is O(logN).
 * It is best according to other time complexity notation.
 */
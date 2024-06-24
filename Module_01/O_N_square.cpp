#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "Hello!" << endl;
        }
    }
    return 0;
}

/**
 * Checking N*N / N square
 * 5
 */

/**
 * 1.....n rules is
 * n * n + 1
 * ---------
 *     2
 *
 * (n-1) * (n + 1 - 1)
 * -------------------
 *          2
 *
 * (n - 1) * n
 * ------------
 *      2
 *
 * n^2 - n
 * -------
 *    2
 * 
 * n^2    n
 * --- - ---
 *  2     2  // Remove the constraint
 * 
 * n^2 - n
 * 
 * o(n^2) // This is the result. Because The value is bigger then n. 
 * 
 */
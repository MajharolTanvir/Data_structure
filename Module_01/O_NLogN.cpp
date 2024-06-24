#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // o (n)
    {
        int x = i;
        while (x > 0) // o (log(n))
        {
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
    }
    return 0;
}

/**
 * Checking O (NLog(n))
 * 15
 *
 * 1st loop = o (n)
 * 2nd loop = o (log(n))
 * ----------------------
 * Final log = o(NLog(n));
 */
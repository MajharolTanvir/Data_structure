#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // O (sqrt(n));
    // ------------ i * 1 <= n (We can also use this one for root)-----
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
    }
    return 0;
}

/**
 * Checking sqrt
 * 36
 */
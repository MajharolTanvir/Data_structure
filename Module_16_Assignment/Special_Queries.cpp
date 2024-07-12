#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (x == 1 && !q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
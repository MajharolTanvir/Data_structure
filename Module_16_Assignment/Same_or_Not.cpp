#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }

    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        q.push(b);
    }

    int flag = 0;

    while (!st.empty() || !q.empty())
    {
        if (st.size() == q.size())
        {
            if (st.top() == q.front())
            {
                flag = 1;
                st.pop();
                q.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
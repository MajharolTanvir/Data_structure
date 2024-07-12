#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        stack<char> st;
        string s;
        cin >> s;

        for (char c : s)
        {
            if (!st.empty())
            {
                if (c == st.top())
                {
                    st.push(c);
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                st.push(c);
            }
        }

        if (!st.empty())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
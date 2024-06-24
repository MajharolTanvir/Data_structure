#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
     * Type 1 -
     * vector<int> v;
     */

    /**
     * Type 2 -
     * vector<int> v(5);
     * for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
     *  cout << endl;
     */

    /**
     * Type 3 -
     * vector<int> v(5, 10);
     * for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
     */

    /**
     * Type 4 -
     * vector<int> v2 = {10, 20, 30, 40, 50}; / vector<int> v2(5, 100);
     * vector<int> v(v2);
     * for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
     */

    // Type - 5

    int a[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v(a, a + 6);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0;
}
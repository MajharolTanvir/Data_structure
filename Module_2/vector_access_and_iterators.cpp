#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    /**
     * Get the last element  --------------
     * cout << v[v.size()-1];
     * cout << v.back();
     */

    /**
     * Get the first element  --------------
     * cout << v[0];
     * cout << v.front();
     */

    /**
     * Get the first element  --------------
     * cout << v[0];
     * cout << v.front();
     */

    /**
     * Get the first element  --------------
     * cout << v.begin();
     */

     /**
     * Get the last element  --------------
     */
    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
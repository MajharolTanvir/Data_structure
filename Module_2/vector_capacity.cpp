#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(18);
    v.push_back(20);
    // cout << v.max_size() << endl; // Type - 1
    // cout << v.capacity() << endl; // Type - 2
    /**
     * v.clear(); // Type - 4
     * cout << v[2] << endl; // After clear the array data can be accessible
     */

    // cout << v.empty() << endl; // Type - 5

    v.resize(3);
    cout << v.size() << endl;
    v.resize(5, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
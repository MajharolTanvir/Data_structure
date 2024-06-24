#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Replace
    // vector<int> v = {1, 2, 3, 6, 7, 9, 4, 6, 3, 5, 7,6};
    // replace(v.begin(), v.end()-2, 6, 8);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // Find type - 1
    //     vector<int> v = {1, 2, 3, 6, 7, 9, 4, 6, 3, 5, 7, 6};
    //     vector<int>::iterator it;
    //     it = find(v.begin(), v.end(), 6);
    //    cout << *it;

    // Find type - 2
    vector<int> v = {1, 2, 3, 6, 7, 9, 4, 6, 3, 5, 7, 6};
    auto it = find(v.begin(), v.end(), 40);
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}
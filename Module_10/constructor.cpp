#include <bits/stdc++.h>
using namespace std;

int main()
{
    /** Constructor - 1
     * list<int> myList;
     * cout << myList.size();
     */

    /** Constructor - 2
     * list<int> myList(10);
     * cout << myList.size();
     */

    /** Constructor - 3
     * list<int> myList(10, 5);
     * cout << myList.size();
     */

    /** Constructor - 4
     * list <int> list2 = {10, 20, 30, 40};
     * list<int> myList(list2);
     * cout << myList.size();
     */

    /** Constructor - 5.1
     * int arr[4] = {10, 20, 30, 40};
     * list<int> myList(arr, arr + 4);
     */

    /** Constructor with iterators - 5.2
     * Vector <int> list2 = {10, 20, 30, 40};
     * list<int> myList(list2.begin(), list2.end());
     */

    vector<int> list2 = {10, 20, 30, 40};
    list<int> myList(list2.begin(), list2.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int value : myList)
    {
        cout << value << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 50};
    list<int> newList;
    // newList = myList; // 1.1
    newList.assign(myList.begin(), myList.end()); // 1.2
    // newList.push_back(10);                        // 2
    // newList.push_front(100);                      // 3
    // newList.pop_back();                           // 4
    // newList.pop_front();                          // 5

    // newList.insert(next(newList.begin(), 2), 100);   // 6
    // newList.erase(next(newList.begin(), 2));         // 7

    // replace(newList.begin(), newList.end(), 30, 100); // 8

    // for (int value : newList)
    // {
    //     cout << value << endl;
    // }

    auto it = find(newList.begin(), newList.end(), 40);
    if (it == newList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}
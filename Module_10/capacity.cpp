#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // cout << myList.max_size();
    // myList.clear();
    myList.resize(2);
    cout << myList.size() << endl;
    myList.resize(5, 100);
    cout << myList.size() << endl;
    for (int value : myList)
    {
        cout << value << endl;
    }
    return 0;
}
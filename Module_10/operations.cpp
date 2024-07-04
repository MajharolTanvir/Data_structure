#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {20, 40, 50, 30, 10, 60, 10};
    // myList.remove(10);

    // myList.sort();
    // myList.sort(greater<int>());

    myList.sort(); 
    // myList.unique();
    myList.reverse();

    for (int value : myList)
    {
        cout << value << endl;
    }
    return 0;
}
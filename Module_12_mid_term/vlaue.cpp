#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myList;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        myList.push_back(s);
    }
    auto cur = myList.begin();
    int q;
    cin >> q;
    while (q--)
    {
        string instruction, address;
        cin >> instruction;
        if (instruction == "visit")
        {
            cin >> address;
            auto it = find(myList.begin(), myList.end(), address);
            if (it == myList.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *it << endl;
                cur = it;
            }
        }
        else if (instruction == "prev")
        {
            if (cur == myList.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *prev(cur) << endl;
                cur = prev(cur);
            }
        }
        else if (instruction == "next")
        {
            if (cur == prev(myList.end()))
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *next(cur) << endl;
                cur = next(cur);
            }
        }
    }
    return 0;
}
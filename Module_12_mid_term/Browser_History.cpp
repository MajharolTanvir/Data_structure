#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    string value;
    while (true)
    {
        cin >> value;
        if (value == "end")
            break;
        myList.push_back(value);
    }

    auto cur = myList.begin();
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string instruction;
        cin >> instruction;
        if (instruction == "visit")
        {
            string address;
            cin >> address;

            auto it = find(myList.begin(), myList.end(), address);
            if (it == myList.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cur = it;
                cout << *it << endl;
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
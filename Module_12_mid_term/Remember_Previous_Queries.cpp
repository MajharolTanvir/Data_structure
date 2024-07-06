#include <bits/stdc++.h>
using namespace std;

void print_values(list<int> myList)
{
    cout << "L -> ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    myList.reverse();

    cout << "R -> ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    myList.reverse();
}

int main()
{
    int q;
    cin >> q;
    list<int> myList;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
            print_values(myList);
        }
        else if (x == 1)
        {
            myList.push_back(v);
            print_values(myList);
        }
        else if (x == 2)
        {
            if (myList.size() == 0 && v == 0 || v > myList.size() || v > myList.size() - 1)
            {
                print_values(myList);
            }
            else if (v <= myList.size())
            {
                myList.erase(next(myList.begin(), v));
                print_values(myList);
            }
        }
    }
    return 0;
}
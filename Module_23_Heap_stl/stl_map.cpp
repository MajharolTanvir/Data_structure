#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["Tamim"] = 42;
    mp["Sakib"] = 53;
    mp["Mahmudullah"] = 72;
    mp["Mushfiq"] = 34;

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
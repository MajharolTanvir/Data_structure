#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        // 1. Insert + remove duplicates O(logN)
        s.insert(x);
    }

    // 2. Searching O(logN)
    if(s.count(10)){
        cout << "YES" << endl;
    }
    else 
    cout << "NO" << endl;

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
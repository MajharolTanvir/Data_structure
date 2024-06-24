#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    p = NULL;
}

int main()
{
    int value = 10;
    int *ptr = &value;
    fun(ptr);
    cout << value << endl;
    cout << ptr << endl;
    return 0;
}
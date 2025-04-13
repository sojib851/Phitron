#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> d_list;
    int val;

    while (cin >> val && val != -1)
    {
        d_list.push_back(val);
    }
    d_list.reverse();
    for (int x : d_list)
    {
        cout << x << " ";
    }

    return 0;
}
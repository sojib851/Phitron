#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst;
    int val;

    while (cin >> val && val != -1)
    {
        lst.push_back(val);
    }
    lst.sort();
    lst.unique();

    for (auto num : lst)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
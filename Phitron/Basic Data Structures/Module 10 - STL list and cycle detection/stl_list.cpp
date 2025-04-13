#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l(10, 3);
    list<int> l = {10, 20, 30, 40, 50};
    // int a[] = {1, 2, 3, 4, 5};
    vector<int> vec = {100, 200, 300, 400};
    // list<int> l2(a, a+5);
    list<int> l2(vec.begin(), vec.end());

    l.clear();
    cout << l.size() << endl;
    if (l.empty())
    {
        cout << "empty";
    }
    else
    {
        for (int val : l)
        {
            cout << val << " ";
        }
    }
    // for (auto i = l.begin(); i != l.end(); i++)
    // {
    //     cout << *l.begin() << endl;
    // }

    return 0;
}
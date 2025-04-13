#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {100, 200, 10, 300, 40, 10, 50, 60};
    // l.remove(10);
    // l.sort();
    // l.sort(greater<int>());

    // l.unique();

    l.reverse();
    for (auto val : l)
    {
        cout << val << " ";
    }
    


    return 0;
}
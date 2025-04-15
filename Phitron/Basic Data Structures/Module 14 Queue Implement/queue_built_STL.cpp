#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    int val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
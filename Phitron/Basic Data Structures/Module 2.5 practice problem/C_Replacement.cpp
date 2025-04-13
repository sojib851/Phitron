#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int t : a)
    {
        if (t < 0)
        {
            cout << 2 << " ";
        }
        else if (t > 0)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << t << " ";
        }
    }

    return 0;
}
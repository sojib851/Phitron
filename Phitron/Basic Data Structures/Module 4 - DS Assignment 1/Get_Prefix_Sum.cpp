#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<long long> pre(n + 1);
    pre[1] = a[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    for (int i = n; i >= 1; i--)
    {
        cout << pre[i] << " ";
    }

    return 0;
}
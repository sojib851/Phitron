#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int value;
    cin >> value;
    int flag = 0;
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == value)
        {
            flag = 1;
            break;
        }
        else if (v[mid] > value)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (flag == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}
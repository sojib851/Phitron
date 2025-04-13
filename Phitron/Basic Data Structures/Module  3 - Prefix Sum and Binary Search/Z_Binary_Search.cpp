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
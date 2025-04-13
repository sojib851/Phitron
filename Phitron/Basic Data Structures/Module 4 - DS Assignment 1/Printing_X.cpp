#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                cout << (i == n / 2 ? "X" : (i == j ? "\\" : "/"));
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
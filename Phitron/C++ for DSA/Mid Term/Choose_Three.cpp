#include <bits/stdc++.h>
using namespace std;

bool findThreeSum(const vector<int> &arr, int n, int target)
{
    vector<int> A = arr;
    sort(A.begin(), A.end());

    for (int i = 0; i < n - 2; ++i)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = A[i] + A[left] + A[right];
            if (sum == target)
            {
                return true;
            }
            else if (sum < target)
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (findThreeSum(a, n, s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
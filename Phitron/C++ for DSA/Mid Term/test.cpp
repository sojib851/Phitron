#include <bits/stdc++.h>
using namespace std;

bool findThreeSum(const vector<int> &arr, int N, int target)
{
    // অ্যারেটি সাজানো
    vector<int> A = arr;
    sort(A.begin(), A.end());

    // অ্যারে ঘুরে গিয়ে টু-পয়েন্টার পদ্ধতি ব্যবহার
    for (int i = 0; i < N - 2; ++i)
    {
        int left = i + 1;
        int right = N - 1;
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
    int T;
    cin >> T; // টেস্ট কেসের সংখ্যা

    while (T--)
    {
        int N, S;
        cin >> N >> S; // অ্যারের সাইজ এবং টার্গেট সান
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i]; // অ্যারের উপাদানগুলো
        }

        // চেক করা যে তিনটি উপাদান যোগফল সান S এর সমান কি না
        if (findThreeSum(A, N, S))
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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    string target = "egypt";
    int min_count = INT_MAX;
    for (char c : target)
    {
        if (freq[c] == 0)
        {
            min_count = 0;
            break;
        }
        min_count = min(min_count, freq[c]);
    }

    cout << min_count;
    return 0;
}
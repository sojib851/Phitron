#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream obName(s);

    string word;
    while (obName >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}
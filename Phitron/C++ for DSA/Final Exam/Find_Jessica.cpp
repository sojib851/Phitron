#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string word;
    bool found = false;

    stringstream ss(s);

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    while (getline(cin, s))
    {
        string sorted_line = "";

        for (char c : s)
        {
            if (c != ' ')
            {
                sorted_line += c;
            }
        }
        sort(sorted_line.begin(), sorted_line.end());

        cout << sorted_line << endl;
    }

    return 0;
}
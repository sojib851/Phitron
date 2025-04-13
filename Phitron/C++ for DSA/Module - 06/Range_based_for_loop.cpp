#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // for(int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    for (char c : s) // Range based for loop element niye kaj kore index check kore na,
    {
        cout << c << endl;
    }
    
    return 0;
}
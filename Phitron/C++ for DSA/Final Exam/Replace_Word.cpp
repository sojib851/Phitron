#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);

        string result = "";
        int n = s.length();
        int m = x.length();

        for (int i = 0; i < n;)
        {
            bool isMatch = true;

            if (i <= n - m)
            {
                for (int j = 0; j < m; j++)
                {
                    if (s[i + j] != x[j])
                    {
                        isMatch = false;
                        break;
                    }
                }
            }
            else
            {
                isMatch = false;
            }

            if (isMatch)
            {
                result += "#";
                i += m;
            }
            else
            {
                result += s[i];
                i++;
            }
        }
        cout << result << endl;
    }

    return 0;
}
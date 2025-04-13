#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;

    stringstream ss(s);
    string word;
    int ctn = 0;
    while (ss >> word)
    {
        cout << word << endl;
        ctn++;
        /* code */
    }
    cout << ctn << endl;
    // ss >> word;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    return 0;
}
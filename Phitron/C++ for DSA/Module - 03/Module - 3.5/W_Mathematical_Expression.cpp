#include <bits/stdc++.h>
using namespace std;

// pending function diye korbo ;

int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    if (S == '+')
    {
        if (A + B == C)
        {
            cout << "Yes";
        }
        else
        {
            cout << A + B;
        }
    }
    if (S == '-')
    {
        if (A - B == C)
        {
            cout << "Yes";
        }
        else
        {
            cout << A - B;
        }
    }
    if (S == '*')
    {
        if (A * B == C)
        {
            cout << "Yes";
        }
        else
        {
            cout << A * B;
        }
    }

    return 0;
}
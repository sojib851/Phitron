#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stc;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stc.push(val);
    }

    while (!stc.empty())
    {
        cout << stc.top() << endl;
        stc.pop();
    }

    // 'STACK' a last a push hoy ar last thekei pop hoy, stack a sudhu top er value/last er value e Access kora jay.
    // ar stack implement korar somoy jei technique use kore take LIFO technique bole.
    // LIFO = Last In First Out. orthat last a in hoy ar first a out hoy.
    // 'Stack' a onno kono value Access kora jay na sudhu top er value e access kora jay--
    // jodi nicer value orthat onno kono value access korte caw tahole top er value orthar last er value pop korte hobe.

    if (stc.empty() == true)
    {
        cout << "ha khali";
    }
    else
    {
        cout << "na khali na";
    }

    return 0;
}
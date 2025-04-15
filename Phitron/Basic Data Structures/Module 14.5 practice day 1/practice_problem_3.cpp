#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        temp.push_back(x);
    }

    stack<int> newStack;
    for (int i = 0; i < n; i++)
    {
        newStack.push(temp[i]);
    }

    stack<int> finalStack;
    while (!newStack.empty())
    {
        finalStack.push(newStack.top());
        newStack.pop();
    }

    while (!finalStack.empty())
    {
        cout << finalStack.top() << " ";
        finalStack.pop();
    }

    return 0;
}

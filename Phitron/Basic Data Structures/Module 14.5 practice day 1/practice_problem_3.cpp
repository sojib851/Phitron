/* Practice problem 3, Module 14-5

Take a stack of size N as input and copy those elements
to another stack to get the values in the order they were
inserted and print them. You should use STL to solve this problem.


Sample Input
5
10 20 30 40 50
Sample Output
10 20 30 40 50

*/

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

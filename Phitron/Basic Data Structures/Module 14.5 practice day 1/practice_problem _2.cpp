/* Practice problem 2, Module 14-5
Question: Take a stack of size N and a queue of size M as
input. Then check if both of them are the same or not in the
order of removing. You should use STL to solve this problem.
*/

#include <bits/stdc++.h>
using namespace std;

bool isSame(stack<int> s, queue<int> q)
{
    if (s.size() != q.size())
        return false;

    while (!s.empty())
    {
        if (s.top() != q.front())
            return false;
        s.pop();
        q.pop();
    }
    return true;
}

int main()
{
    int n, val;
    cin >> n;
    stack<int> s;
    while (n--)
    {
        cin >> val;
        s.push(val);
    }

    int m;
    cin >> m;
    queue<int> q;
    while (m--)
    {
        cin >> val;
        q.push(val);
    }

    if (isSame(s, q))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
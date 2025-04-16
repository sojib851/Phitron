/* Practice problem 4 Module 14-5
Question: Take a queue of size N as input.
You need to copy those elements in another queue
in reverse order. You might use stack here.
You should use STL to solve this problem.
After copying in another queue, print the elements of that queue.

Sample Input
5
10 20 30 40 50
Sample Output
50 40 30 20 10


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    queue<int> q_revers;
    while (!s.empty())
    {
        q_revers.push(s.top());
        s.pop();
    }

    while (!q_revers.empty())
    {
        cout << q_revers.front() << " ";
        q_revers.pop();
    }

    return 0;
}
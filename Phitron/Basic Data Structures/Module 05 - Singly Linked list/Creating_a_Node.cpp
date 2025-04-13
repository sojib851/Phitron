#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

Node(int val) // node with constructor
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10), b(20), c(30), d(40), e(50), f(60);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    cout << a.next->next->next->next->next->val << endl;

    return 0;
}
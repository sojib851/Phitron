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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // a.next = &b;
    head->next = a;
    a->next = b;

    cout << head->next->next->val << endl;

    return 0;
}
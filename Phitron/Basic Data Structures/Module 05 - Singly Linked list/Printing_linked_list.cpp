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
    Node *c = new Node(42340);

    head->next = a;
    a->next = b;
    b->next = c;

    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout << endl;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    // while (head != NULL)
    // { aivabe korle head null er modde cole jay pore ar head ke acess kora jay na.
    //     cout << head->val << endl;
    //     head = head->next;
    // }

    return 0;
}
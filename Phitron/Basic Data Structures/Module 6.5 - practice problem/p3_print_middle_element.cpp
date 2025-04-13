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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void print_at_middle(Node *&head, int sz)
{
    Node *tmp = head;
    for (int i = 0; i < sz / 2 - (sz % 2 == 0 ? 1 : 0); i++)
    {
        tmp = tmp->next;
    }
    if (sz % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        cout << tmp->val;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int sz = 0;

    while (1)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        sz++;
        insert_at_tail(head, tail, val);
    }

    print_at_middle(head, sz);

    return 0;
}
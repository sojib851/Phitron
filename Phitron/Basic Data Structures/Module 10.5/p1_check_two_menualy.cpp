#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val) // node with constructor
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = tail->next;
}

bool list_are_equal(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return tmp1 == NULL && tmp2 == NULL;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }

    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }

    if (list_are_equal(head1, head2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
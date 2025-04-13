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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

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

void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q, sz = 0;
    cin >> Q;

    while (Q--)
    {
        int x, v;
        cin >> x >> v;
        int idx = x, val = v;

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (idx == 0)
            {
                insert_at_head(head, tail, val);
            }
            else if (idx == sz)
            {
                insert_at_tail(head, tail, val);
            }
            else
            {
                insert_at_any_pos(head, idx, val);
            }
            sz++;
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}
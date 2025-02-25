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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val); // create a new node
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
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
    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int sz = 0;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        sz++;
        insert_at_tail(head, tail, val);
    }

    int idx;
    while (cin >> idx >> val) // for queries
    {
        if (idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx == 0)
        {
            insert_at_head(head, val);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
        }
        print_linked_list(head);
    }

    return 0;
}
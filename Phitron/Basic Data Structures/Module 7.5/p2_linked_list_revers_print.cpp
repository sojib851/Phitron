#include <bits/stdc++.h>
using namespace std;

// Node structure
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

void print_linked_list_revers(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }
    print_linked_list_revers(tmp->next);
    cout << tmp->val << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_linked_list_revers(head);

    return 0;
}
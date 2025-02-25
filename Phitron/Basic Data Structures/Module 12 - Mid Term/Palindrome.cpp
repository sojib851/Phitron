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

bool is_palindrome(Node *&head, Node *&tail)
{
    Node *t_head = head;
    Node *t_tail = tail;

    while (t_head != NULL && t_tail != NULL)
    {
        if (t_head->val != t_tail->val)
        {
            return false;
        }
        t_head = t_head->next;
        t_tail = t_tail->prev;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    if (is_palindrome(head, tail))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
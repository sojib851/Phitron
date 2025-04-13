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

void minimum_maximum(Node *head)
{
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < minimum)
        {
            minimum = tmp->val;
        }
        if (tmp->val > maximum)
        {
            maximum = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << maximum - minimum;
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
    minimum_maximum(head);

    return 0;
}
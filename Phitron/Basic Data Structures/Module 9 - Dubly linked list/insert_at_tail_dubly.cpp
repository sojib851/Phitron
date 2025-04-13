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

// insert at head
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
// print forward
void print_forward(Node *head)
{
    Node *tmp = head;
    cout << "forward: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// print backward
void print_backward(Node *tail)
{
    Node *tmp = tail;
    cout << "backward: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);

    print_forward(head);

    print_backward(tail);
    return 0;
}
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
// insert at head
void insert_at_head(Node *&head, Node *&tail, int V)
{
    Node *newNode = new Node(V);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = newNode;
    }
}
// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int V)
{
    Node *newNode = new Node(V);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

// deletion
void delete_at_index(Node *&head, Node *&tail, int V)
{
    if (V < 0 || head == NULL)
    {
        return;
    }
    if (V == 0)
    {
        Node *tmp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < V - 1 && tmp->next != NULL; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *toDelete = tmp->next;
    tmp->next = toDelete->next;
    if (toDelete->next == NULL)
    {
        tail = tmp;
    }
    delete toDelete;
}

void print_linked_list(Node *&head)
{
    Node *travers = head;
    while (travers != NULL)
    {
        cout << travers->val << " ";
        travers = travers->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, tail, V);
        }
        print_linked_list(head);
    }

    return 0;
}
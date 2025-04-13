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

void revers_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    revers_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    revers_linked_list(head, tail, head);

    print_linked_list(head);

    cout << head->val << endl;
    cout << tail->val << endl;

    // cout << head->val << " " << head->next->val << " " << head->next->next->val << " " << head->next->next->next->val;
    // ekhon list er head pointer a last er value ta cole aseche tar mane linked list rever hoye geche.

    return 0;
}
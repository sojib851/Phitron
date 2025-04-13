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

// delete at head
void delete_at_head(Node *&head, Node *&tail)
{

    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
// print forward
void print_forward(Node *head)
{
    Node *tmp = head;
    // cout << "forward: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
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

    delete_at_head(head, tail);
    delete_at_head(head, tail);
    print_forward(head);

    // print_backward(tail);
    return 0;
}
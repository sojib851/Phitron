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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = a;

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);
    print_linked_list(head);
    cout << "Tail = " << tail->val << endl;

    return 0;
}
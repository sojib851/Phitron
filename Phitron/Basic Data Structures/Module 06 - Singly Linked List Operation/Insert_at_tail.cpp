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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val); //create a new node

    Node* tmp = head; //head ke copy kora holo
    while (tmp->next != NULL) //node ses howa porjonto colbe
    {
        tmp = tmp->next; //
    }
    tmp->next = newNode;
    // right noy tmp is at last node.
    
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
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    print_linked_list(head);

    return 0;
}
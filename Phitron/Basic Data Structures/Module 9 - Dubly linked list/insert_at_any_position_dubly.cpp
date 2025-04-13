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

// insert at any position
void insert_at_any_position(Node *&head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->next->prev = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;
    
    
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

// // print backward
// void print_backward(Node *&tail)
// {
//     Node *tmp = tail;
//     cout << "backward: ";
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 1, 600);

    print_forward(head);

    // print_backward(tail);
    return 0;
}
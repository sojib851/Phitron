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
    // int count = 0;
    while (tmp != NULL)
    {
        // count++;
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    // cout << "count = " << count << endl;
}

void delete_at_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;

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
    delete_at_head(head);
    delete_at_head(head);
    delete_at_head(head);
    delete_at_head(head);
    print_linked_list(head);

    return 0;
}
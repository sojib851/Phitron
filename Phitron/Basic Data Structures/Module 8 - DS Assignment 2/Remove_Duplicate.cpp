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

// insert at tail
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

void remove_duplicates(Node *&head)
{
    Node *current = head;

    while (current != NULL && current->next != NULL)
    {
        Node *runner = current;
        while (runner->next != NULL)
        {
            if (runner->next->val == current->val)
            {
                Node *duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

    remove_duplicates(head);

    print_linked_list(head);

    return 0;
}
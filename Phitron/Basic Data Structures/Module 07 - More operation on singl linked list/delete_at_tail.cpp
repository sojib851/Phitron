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

void delete_at_tail(Node *head, Node* &tail, int idx)
{
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
    
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
    cout << "tail before delete : " << tail->val << endl;
    delete_at_tail(head,tail, 5);
    print_linked_list(head);
    cout << "tail after delete : " << tail->val << endl;

    return 0;
}
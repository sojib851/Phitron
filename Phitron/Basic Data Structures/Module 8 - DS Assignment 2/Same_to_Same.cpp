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

Node *create_Linked_List()
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
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

bool their_list_are_same(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (tmp1 != NULL || tmp2 != NULL)
    {
        return false;
    }
    return true;
}

int main()
{
    Node *head1 = create_Linked_List();
    Node *head2 = create_Linked_List();

    if (their_list_are_same(head1, head2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
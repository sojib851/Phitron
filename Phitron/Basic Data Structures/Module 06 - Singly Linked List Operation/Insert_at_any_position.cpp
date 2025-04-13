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

void insert_at_any_pos(Node* &head, int idx, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;

    for (int i = 1; i < idx ; i++)
    {
        tmp = tmp->next;
    }
    //tmp at idx - 1
    newNode->next = tmp->next;
    tmp->next = newNode;
    
}

void Print_linked_list(Node* &head)
{
    Node* tmp = head;
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

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 2, 220);
    Print_linked_list(head);


    return 0;
}
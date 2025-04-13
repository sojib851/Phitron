#include <bits/stdc++.h>
using namespace std;

// Node structure with class
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

// 1st linked list from main function --->
void insert_at_tail1(Node *&head1, Node *&tail1, int val1)
{
    Node *newNode1 = new Node(val1); // create a new node
    if (head1 == NULL)
    {
        head1 = newNode1;
        tail1 = newNode1;
        return;
    }

    tail1->next = newNode1;
    tail1 = tail1->next;
}

// 2nd linked list from main function --->
void insert_at_tail2(Node *&head2, Node *&tail2, int val2)
{
    Node *newNode2 = new Node(val2); // create a new node
    if (head2 == NULL)
    {
        head2 = newNode2;
        tail2 = newNode2;
        return;
    }

    tail2->next = newNode2;
    tail2 = tail2->next;
}

// check linked list if their size are same or not -->
void chek_size_linked_list(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int linked1Size = 0;
    int linked2Size = 0;

    while (tmp1 != NULL) // Node Traversal: head theke suru kore protiti next pointer a jabe jotokhun na NULL pay.
    {
        linked1Size++;
        tmp1 = tmp1->next;
    }
    // --------- X ----------
    while (tmp2 != NULL)
    {
        linked2Size++;
        tmp2 = tmp2->next; // loop er moto tmp2 ak ghor kore samne jabe NULL pawar ag porjonto.
    }

    // check their size with condition
    if (linked1Size == linked2Size)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    // 1st linked list --->
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail1(head1, tail1, val1);
    }

    // 2nd linked list --->
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail2(head2, tail2, val2);
    }

    chek_size_linked_list(head1, head2);

    return 0;
}
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
    tail = newNode;
}

bool lis_duplicate(Node *head)
{
    bool visited[101] = {false};
    Node *tmp = head;

    while (tmp != NULL)
    {
        if(visited[tmp->val])
        {
            return true;
        }
        visited[tmp->val] = true;
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
    if (lis_duplicate(head))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    

    return 0;
}
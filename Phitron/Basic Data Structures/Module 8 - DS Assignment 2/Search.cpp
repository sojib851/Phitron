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

int find_X_index(Node *head, int X)
{
    Node *tmp = head;
    int index = 0;

    while (tmp != NULL)
    {
        if (tmp->val == X)
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        // --->
        int X;
        cin >> X;
        int result = find_X_index(head, X);
        cout << result << endl;
    }

    return 0;
}
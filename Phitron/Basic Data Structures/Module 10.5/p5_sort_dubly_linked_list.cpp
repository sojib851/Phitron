// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val) // node with constructor
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = tail->next;
// }

// void sorting_dubly_linked_list(Node *&head)
// {
//     Node *i, *j;
//     for (i = head; i != NULL; i = i->next)
//     {
//         for (j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val > j->val)
//             {
//                 swap(i->val, j->val);
//             }
//         }
//     }
// }

// void print_dubly_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int val;
//     while (true)
//     {
//         cin >> val;
//         if (val == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, tail, val);
//     }

//     sorting_dubly_linked_list(head);

//     print_dubly_linked_list(head);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "Hoo mile gese 2 ta";
    }
    else
    {
        cout << "Nare mile nai";
    }

    return 0;
}
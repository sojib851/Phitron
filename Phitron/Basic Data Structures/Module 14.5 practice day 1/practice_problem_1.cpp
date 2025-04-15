/*
Question: Take two stacks of size N and M as input
and check if both of them are the same or not.
Don’t use STL stack to solve this problem.
*/

//-------> using Stack STL
#include <bits/stdc++.h>
using namespace std;

bool isSame(stack<int> s1, stack<int> s2)
{
    if (s1.size() != s2.size())
        return false;

    while (!s1.empty())
    {
        if (s1.top() != s2.top())
            return false;
        s1.pop();
        s2.pop();
    }
    return true;
}

int main()
{
    stack<int> s1;
    int n;
    int val;
    cin >> n;
    while (n--)
    {
        cin >> val;
        s1.push(val);
    }
    stack<int> s2;
    int m;
    cin >> m;
    while (m--)
    {
        cin >> val;
        s2.push(val);
    }

    if (isSame(s1, s2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

//---------> using array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n;
//     int arr1[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     cin >> m;
//     int arr2[m];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }

//     if (n != m)
//     {
//         cout << "NO" << endl;
//         return 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES";

//     return 0;
// }

//----------> using linked list;

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val) // node with constructor
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void push(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// bool isSame(Node *head1, Node *head2)
// {
//     while (head1 && head2)
//     {
//         if (head1->val != head2->val)
//         {
//             return false;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     return head1 == NULL && head2 == NULL;
// }
// int main()
// {
//     int n, m, x;
//     cin >> n;
//     Node *stack1 = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         push(stack1, x);
//     }

//     cin >> m;
//     Node *stack2 = NULL;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         push(stack2, x);
//     }

//     if (isSame(stack1, stack2))
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> l)
{
    cout << "L -> ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    
    l.reverse();
    cout << "R -> ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> li;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            li.push_front(v);
            print_list(li);
        }
        else if (x == 1)
        {
            li.push_back(v);
            print_list(li);
        }
        else if (x == 2)
        {
            int idx = v;
            if (idx < 0 || idx >= li.size())
            {
                print_list(li);
                continue;
            }
            auto it = li.begin();
            for (int i = 0; i < idx; i++)
            {
                it++;
            }
            li.erase(it);
            print_list(li);
        }
    }

    return 0;
}
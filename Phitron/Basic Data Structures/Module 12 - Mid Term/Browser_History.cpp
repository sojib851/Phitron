#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> stl_list;
    string adress;
    while (cin >> adress && adress != "end")
    {
        stl_list.push_back(adress);
    }

    list<string>::iterator it;

    int Q;
    cin >> Q;
    while (Q--)
    {
        string op;
        cin >> op;
        if (op == "visit")
        {
            string visit_adress;
            cin >> visit_adress;
            bool flag = false;

            for (auto i = stl_list.begin(); i != stl_list.end(); i++)
            {
                if (visit_adress == *i)
                {
                    cout << visit_adress << endl;
                    it = i;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (op == "prev")
        {
            bool flag = false;

            for (auto i = stl_list.begin(); i != stl_list.end(); i++)
            {
                if (*next(i) == *it)
                {
                    cout << *i << endl;
                    flag = true;
                    it = i;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (op == "next")
        {
            
            
        }
        
    }

    return 0;
}
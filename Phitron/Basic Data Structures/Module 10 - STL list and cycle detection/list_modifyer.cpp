#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> L = {10, 20, 30, 40, 50, 60, 70, 80};    //---> ata behind the secne dubly linked_list.
    list<int> L = {10, 20, 30, 20, 50, 20, 70, 20};    //---> ata behind the secne dubly linked_list.
    // list<int> L2 = {100, 200, 300, 400, 500};
    // vector<int> v = {700, 800, 900, 1034};
    // list<int> L2;
    // L2 = L;
    // L2.assign(L.begin(), L.end());    //---> copy the list , list means dubly linked list

    // L.push_front(100);    //---> insert at head
    // L.push_back(600);    //---> insert at tail

    // L.pop_back();    //---> delete at tail
    // L.pop_front();    //---> delete at head

    // L.insert(next(L.begin(), 2), v.begin(), v.end());    //---> insert at any position.

    // cout << *next(L.begin(), 4) << endl;

    // L.erase(next(L.begin(), 1), next(L.begin(), 7));    //---> delete at any position + delete at multipul values


    // replace(L.begin(), L.end(), 20, 100);    //---> replace any values.

    auto itarator = find(L.begin(), L.end(), 20);    //---> begin theke last porjonto travers korbe loop er moto end value khujbe.

    if(itarator == L.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    

    for (int val : L)
    {
        cout << val << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2, 5, 9};
    // vector<int> v2 = {100, 200, 300, 400, 500};
    // vector<int> v2;
    // v2 = v;

    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // v.pop_back(); // seser value ta remove kore day

    // v.insert(v.begin() + 2, v2.begin(), v2.end()); // v er 2 number position theke insert orthat copy suru hobe.

    // v.erase(v.begin()+1, v.end()- 2); // delete the value in position.

    // replace(v.begin(), v.end() -1, 2, 50);

    // vector<int> :: iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 5);

    // if (it == v.end())
    // {
    //     cout << "Not Found";
    // }else cout << "Found";

    cout << v.front() << endl;
    cout << v.back() << endl;
    

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    return 0;
}
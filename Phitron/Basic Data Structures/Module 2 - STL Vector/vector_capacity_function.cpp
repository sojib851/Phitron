#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    cout << v.size() << endl;

    v.clear(); // ai function diye vector clear hoy kintu memory theke delete hoy na.

    cout << v.size() << endl;
    v.push_back(55);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    cout << v[0] << endl;

    if (v.empty())
    cout << "Khali" << endl;
    else cout << "Kichu ache" << endl;
    v.resize(7, 8);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    

    return 0;
}
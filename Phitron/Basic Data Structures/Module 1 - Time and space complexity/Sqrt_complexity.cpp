#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // cout << n;
    for (int i = 0; i < n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " " << n/i << " ";
        }
    }
    


    return 0;
}
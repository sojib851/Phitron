#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int a[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    
    // reverse(starting a, end a + n); reverse the number of array;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " "; 
    // }
    
    string s;
    getline(cin, s);
    
    reverse(s.begin(), s.end());

    cout << s << endl; // এইভাবে রিভার্স করলে প্রত্তেক্টা অক্ষর শেসের অক্ষর থেকে রিভার্স করা সুরু করে কিন্তু
                        // ওয়ার্ড বাই ওয়ার্ড রিভার্স করা জায়, সেটা korte hole stringstream(s) ai function ti use korte hobe;

    return 0;
}
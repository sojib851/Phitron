#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // cout << a << b << c << d << endl;

    cout << min({a, b, c, d}) << endl;
    cout << max({a, b, c, d}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;
    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}

/*

input
10 20 30 40

output
10
40
20 10

*/
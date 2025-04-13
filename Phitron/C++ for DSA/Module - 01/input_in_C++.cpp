#include <iostream>
using namespace std;

int main()
{
    int x;
    char c;
    double d;

    cin >> x >> c >> d; // (C) scanf("%d %c %lf", x, c, d);

    cout << x << " " << c << endl << d << endl; // (C) printf("%d %c %lf", x, c, d);

    char cr = 'A';

    int num = cr;

    cout << num << endl;

    int y = 100;

    cout << (char) y;


    return 0;
}

/*
input
50 j 4.55

output
50 j
4.55
65
d
*/

//input neyar somoy cin >> ata user korbo.
// output print korar somoy cout << ata use korbo.
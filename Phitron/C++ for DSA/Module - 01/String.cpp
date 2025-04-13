#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << x << endl;
    cin.ignore(); // cin.ignore use na korle prothome akta output dibe kintu porer output ta dibe na
                    // karon input a akta inter thake tai. tai ata use korle sob output e asbe.

    char str[100];
    cin.getline(str, 100); // onek gula line input nite hole getline use korbo.

    cout << str << endl;

    string s;
    cin >> s; // array chara o string function diye string input neya jay kintu space inpout nibe na.
    cout << s;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Suturday\n";

    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
        // break statement na dile jodi akta case true hoy tahole porer sobgulai true hoye jabe and print kore dibe.
    case 5:
        cout << "Wednesday\n";
    case 6:
        cout << "Thursday\n";
    case 7:
        cout << "Friday\n";
    }

    return 0;
}
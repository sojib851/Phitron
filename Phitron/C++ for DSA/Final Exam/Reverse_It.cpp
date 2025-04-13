#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string name[100];
    int cls[100], id[100];
    char section[100];

    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> cls[i] >> section[i] >> id[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(section[i], section[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " " << cls[i] << " " << section[i] << " " << id[i] << endl;
    }

    return 0;
}
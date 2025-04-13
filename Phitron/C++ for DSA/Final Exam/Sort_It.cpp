#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string nm[100];
    int cls[100], id[100], math[100], eng[100];
    char sec[100];

    for (int i = 0; i < n; i++)
    {
        cin >> nm[i] >> cls[i] >> sec[i] >> id[i] >> math[i] >> eng[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int total1 = math[j] + eng[j];
            int total2 = math[j + 1] + eng[j + 1];

            if (total1 < total2 || (total1 == total2 && id[j] > id[j + 1]))
            {
                swap(nm[j], nm[j + 1]);
                swap(cls[j], cls[j + 1]);
                swap(sec[j], sec[j + 1]);
                swap(id[j], id[j + 1]);
                swap(math[j], math[j + 1]);
                swap(eng[j], eng[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nm[i] << " " << cls[i] << " " << sec[i] << " " << id[i] << " " << math[i] << " " << eng[i] << endl;
    }

    return 0;
}
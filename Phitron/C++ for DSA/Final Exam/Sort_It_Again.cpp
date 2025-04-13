#include <bits/stdc++.h>
using namespace std;

void sortStudents(string name[], int cls[], char section[], int id[], int math[], int eng[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (eng[i] < eng[j])
            {
                swap(name[i], name[j]);
                swap(cls[i], cls[j]);
                swap(section[i], section[j]);
                swap(id[i], id[j]);
                swap(math[i], math[j]);
                swap(eng[i], eng[j]);
            }

            else if (eng[i] == eng[j] && math[i] < math[j])
            {
                swap(name[i], name[j]);
                swap(cls[i], cls[j]);
                swap(section[i], section[j]);
                swap(id[i], id[j]);
                swap(math[i], math[j]);
                swap(eng[i], eng[j]);
            }

            else if (eng[i] == eng[j] && math[i] == math[j] && id[i] > id[j])
            {
                swap(name[i], name[j]);
                swap(cls[i], cls[j]);
                swap(section[i], section[j]);
                swap(id[i], id[j]);
                swap(math[i], math[j]);
                swap(eng[i], eng[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    string name[n];
    int cls[n];
    char section[n];
    int id[n], math[n], eng[n];

    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> cls[i] >> section[i] >> id[i] >> math[i] >> eng[i];
    }

    sortStudents(name, cls, section, id, math, eng, n);

    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " " << cls[i] << " " << section[i] << " " << id[i] << " " << math[i] << " " << eng[i] << endl;
    }

    return 0;
}

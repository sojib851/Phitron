#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int totalMarks;

    Student(int id, string name, char section, int totalMarks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student students[3] =
            {
                Student(0, "", ' ', 0),
                Student(0, "", ' ', 0),
                Student(0, "", ' ', 0),
            };

        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        Student best = students[0];
        for (int i = 1; i < 3; i++)
        {
            if (students[i].totalMarks > best.totalMarks ||
                (students[i].totalMarks == best.totalMarks && students[i].id < best.id))
            {
                best = students[i];
            }
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.totalMarks << endl;
    }

    return 0;
}
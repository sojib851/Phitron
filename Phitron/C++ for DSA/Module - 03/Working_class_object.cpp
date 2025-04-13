#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100]; // 100 byte
    int roll; // 4 byte
    double gpa; // 8 byte
};

int main()
{
    Student a;
    char temp[100] = "Sojib Hossain";
    strcpy(a.name, temp);
    a.gpa = 4.5;
    a.roll = 10;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}
/*
Sojib Hossain 10 4.5

*/
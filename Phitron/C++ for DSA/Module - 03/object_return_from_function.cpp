#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    { // constructor
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

student fun()
{
    student obj(34, 11, 4.50);
    return obj;
}
int main()
{
    student rakib(23, 6, 2.68);
    student sakib(50, 1, 3.23);

    student sojib_hossain = fun();

    cout << "Rakib Form: " << endl
         << "Roll: " << rakib.roll << endl
         << "Class: " << rakib.cls << endl
         << "GPA: " << rakib.gpa << endl
         << endl;
    cout << "Sakib Form: " << endl
         << "Roll: " << sakib.roll << endl
         << "Class: " << sakib.cls << endl
         << "GPA: " << sakib.gpa << endl
         << endl;
    cout << "Sojib Form: " << endl
         << "Roll: " << sojib_hossain.roll << endl
         << "Class: " << sojib_hossain.cls << endl
         << "GPA: " << sojib_hossain.gpa << endl
         << endl;

    return 0;
}
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

int main()
{
    student rahim(23, 6, 4.50);
    student* karim = new student(10, 5 , 56);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;
}
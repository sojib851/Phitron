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

student* fun()
{
    student* karim = new student(2, 5, 5.00);


    return karim;
}
int main()
{
    student* p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int cls;
    float gpa;

    student(int roll, int cls, int gpa)
    { // constructor
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    student rakib(23, 6, 4.50);
    student sakib(50, 1, 3);
    cout << "Rakib Form: " << endl << "Roll: " <<  rakib.roll << endl << "Class: " << rakib.cls << endl << "GPA: " << rakib.gpa << endl << endl;
    cout << "Sakib Form: " << endl << "Roll: " <<  sakib.roll << endl << "Class: " << sakib.cls << endl << "GPA: " << sakib.gpa << endl;

    return 0;
}
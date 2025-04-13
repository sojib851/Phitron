#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int cls;
    float gpa;

    student(int r, int c, int g)
    { //constructor
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // student rakib;
    // rakib.roll = 45;
    // rakib.cls = 5;
    // rakib.gpa = 3.20;

    // ato gula line na lekhe shortcut korte hole constructor use korte hobe.

    student rakib(23, 6, 4.50);
    student sakib(50, 1, 3);
    cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    cout << sakib.roll << " " << sakib.cls << " " << sakib.gpa << endl;

    return 0;
}
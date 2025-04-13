#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "total marks of " << name << " = " << math + english << endl;
    }

    // void hello()
    // {
    //     cout << "Hello from " << name << endl;
    // }
};

int main()
{
    student sakib("Sakib Hossain", 23, 55, 45);
    // cout << sakib.name << " " << sakib.roll << endl;
    sakib.total();
    student rakib("Rakib Ahmed", 55, 20, 80);
    rakib.total();


    return 0;
}
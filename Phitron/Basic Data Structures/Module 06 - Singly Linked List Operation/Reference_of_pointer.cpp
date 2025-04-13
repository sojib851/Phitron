#include <bits/stdc++.h>
using namespace std;

void fun(int* &p)
{ // fun function a kisu change korle jodi amra cai  main function a o change hok
    // tahole reference korte hobe mane (&) ai sing diye recive korte hobe.
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In Min: " << *p << endl;

    return 0;
}
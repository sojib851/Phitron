#include <bits/stdc++.h>
using namespace std;

int* fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;

/*
int a[5]; static array nile return korar por automatic delete hoye jay tai 
int *a = new int[5]; avabe dynamic array nite hobe.
*/
}

int main()
{
    int *x = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int *p;
void fun()
{
    int x = 10;
    p = &x;
    cout << "Fun -> " << *p << endl;

    /*
        normar variable nile function theke return korar por variable er value  delete hoye jay.
        tai dynaminc variable nile variable er value ta delete hoy na. ar dynamic variable nite hole.
        pointer use korte hobe.
    */
}

int *Q;
void fun2()
{
    int *y = new int;
    *y = 55;
    Q = y;
    cout << "Fun2 -> " << *Q << endl;

    /*
        new, keyword ta heap memory ke acseec kore. new 'int' int heap memory te 4 byte jaga ney . ar memory adress ta
         '*y' ei pointer a stor hoy. and '*y' ke derefence kore tar moddhe rekhe disi 55 'line 22'
    */
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;

    fun2();
    cout << "Main2 -> " << *Q << endl;
    return 0;
}

/*
    stack variable nile aoutomatic delete hoye jay kintu
    heap, mane dynamic variable nile automatic delete hoy na.
*/
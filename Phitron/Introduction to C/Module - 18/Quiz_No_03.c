#include <stdio.h>
void fun()
{
printf("fun\n");
fun();
}
int main()
{
fun();
}

/*
    Infinite Recursion
 */
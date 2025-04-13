#include <stdio.h>

void fun(int x, int *y)
{
    x *= 10;
    *y *= 10;

    printf("%d %d\n", x, *y); //100 200

}

int main()
{

    int a = 10, b = 20;

    fun(a, &b);

    printf("%d %d\n", a, b); //10 200

    return 0;
}
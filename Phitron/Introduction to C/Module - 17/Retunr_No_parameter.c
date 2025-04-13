#include <stdio.h>

int add()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Function Called\n");

    int sum = a + b;

    return sum;
}

double getPi()
{

    return 3.14157;
}


int main()
{
    printf("%lf\n", getPi());

    printf("Before Called\n");

    printf("%d\n", add());
    printf("%d\n", add());
    printf("%d\n", add());
    printf("%d\n", add());

    printf("After Called\n");

    return 0;
}
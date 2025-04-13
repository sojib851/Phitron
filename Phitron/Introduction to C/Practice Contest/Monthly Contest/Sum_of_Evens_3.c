#include <stdio.h>

int sumEven(int n)
{

    if (n <= 0)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        return n + sumEven(n - 2);
    }
    else
    {
        return sumEven(n - 1);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%d", sumEven(n));

    return 0;
}
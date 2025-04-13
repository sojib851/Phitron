#include <stdio.h>

void getSum()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = x + y;
    printf("%d", sum);
}

int main()
{

    getSum();

    return 0;
}

/*
    input
    5 2

    output
    7
*/
#include <stdio.h>

void printAllnumbers(int x, int n)
{
    if (x > n)
    {
        return;
    }
    printf("%d\n", x);

    printf("Before function call, Current X = %d\n", x);
    printAllnumbers(x + 1, n);

    printf("After function call, Current X = %d\n", x);
}

int main()
{
    printf("Before function call in main\n");

    int n = 5;
    printAllnumbers(1, n);
    printf("After function call in main");

    return 0;
}

/*
-----------> output

Before function call in main
1
Before function call, Current X = 1
2
Before function call, Current X = 2
3
Before function call, Current X = 3
4
Before function call, Current X = 4
5
Before function call, Current X = 5
After function call, Current X = 5
After function call, Current X = 4
After function call, Current X = 3
After function call, Current X = 2
After function call, Current X = 1
After function call in main

---------->
*/
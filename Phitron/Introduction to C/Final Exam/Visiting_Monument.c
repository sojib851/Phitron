#include <stdio.h>

// printAscending
void printAscending(int one, int n)
{

    if (one > n)
        return;
    printf("%d ", one);
    printAscending(one + 1, n);
}

// printDescending
void printDescending(int n)
{

    if (n < 1)
        return;
    printf("%d ", n);
    printDescending(n - 1);
}

// UpToDown
void UpToDown(int n)
{

    printAscending(1, n);
    printDescending(n - 1);
    printf("\n");
}

int main()
{

    int t, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        UpToDown(n);
    }

    return 0;
}

/*
    input
    2
    3
    4

    output
    1 2 3 2 1
    1 2 3 4 3 2 1

*/
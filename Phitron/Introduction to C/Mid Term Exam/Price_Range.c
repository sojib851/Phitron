#include <stdio.h>
#include <string.h>

int main()
{

    int n, x, y;

    scanf("%d %d %d", &n, &x, &y);

    int p[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (p[i] <= y && p[i] >= x)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

/*
    input
    10 4 8
    8 7 2 3 1 10 25 8 13 5

    output
    4
*/  
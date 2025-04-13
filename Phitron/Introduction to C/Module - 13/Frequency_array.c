#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n + 5];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[10000] = {0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, f[i]);
    }
    printf("\nNext Line\n\n");
    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        printf("%d ", x);

        if (f[x] == 1)
        {
            printf("ache\n");
        }
        else
        {
            printf("nai\n");
        }
    }

    return 0;
}

/*
    input
    8
    8 3 4 1 6 3 3 5
    6
    8 2 3 6 4 5

    output
    0 0
    1 1
    2 0
    3 1
    4 1
    5 1
    6 1
    7 0
    8 1
    9 0

    Next Line
    
    8 ache
    2 nai
    3 ache
    6 ache
    4 ache
    5 ache

*/
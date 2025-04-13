#include <stdio.h>
#include <string.h>

int f[100005];

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        f[a[i]] += 1;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}

/*
    input
    10 5
    1 2 3 4 5 3 2 1 5 3

    output
    2
    2
    3
    1
    2

*/
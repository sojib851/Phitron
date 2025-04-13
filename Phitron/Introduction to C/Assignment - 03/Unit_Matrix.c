#include <stdio.h>
#include <string.h>

int main()
{

    int n;

    scanf("%d", &n);

    int unit[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &unit[i][j]);
        }
    }

    int element = 1;
    int isUnitMatrix = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && unit[i][j] != element)
            {
                isUnitMatrix = 0;
                break;
            }
            else if (i != j && unit[i][j] != 0)
            {
                isUnitMatrix = 0;
            }
        }
    }

    if (isUnitMatrix == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

/*
    input
    3
    1 0 0
    0 1 0
    0 0 1

    output
    YES


    input
    5
    1 0 0 0 0
    0 1 0 0 0
    0 0 1 0 1
    0 0 0 1 0
    0 0 0 0 1

    output
    NO
*/
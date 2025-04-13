#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int candidate[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &candidate[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (candidate[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (candidate[i] >= 1 && candidate[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (candidate[i] >= 4 && candidate[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else if (candidate[i] > 7)
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}

/*
    input
    4
    4
    0
    3
    8

    output
    Mid-level candidate
    Entry-level candidate
    Junior candidate
    Senior candidate

*/
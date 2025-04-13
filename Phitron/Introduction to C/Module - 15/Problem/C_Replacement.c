#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            printf("2 ");
        }
        else if (array[i] > 0)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }

    return 0;
}

/*
    input
    5
    1 -2 0 3 4

    output
    1 2 0 1 1
*/
#include <stdio.h>
#include <string.h>

int main()
{

    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        int count = 0;

        int number;

        scanf("%d", &number);

        for (int k = 0; k < n; k++)
        {
            for (int L = 0; L < m; L++)
            {
                if (matrix[k][L] == number)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

/*
    input
    2 3 3
    1 2 5
    2 6 4
    2
    6
    7

    output
    2
    1
    0

*/
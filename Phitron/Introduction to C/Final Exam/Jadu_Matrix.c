#include <stdio.h>

// function 
int isJaduMatrix(int n, int m, int matrix[n][m])
{
    if (n != m)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (matrix[i][j] != 1)
                {
                    return 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}


// main
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isJaduMatrix(n, m, matrix))
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
Sample Input 0
5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1

Sample Output 0
YES
-->

Sample Input 1
5 5
1 0 0 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
1 0 0 0 1

Sample Output 1
NO
-->

Sample Input 2
5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 1
0 1 0 1 0
1 0 0 0 1

Sample Output 2
NO
-->

Sample Input 3
5 5
2 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1

Sample Output 3
NO
-->

Sample Input 4
6 6
1 0 0 0 0 1 
0 1 0 0 1 0 
0 0 1 1 0 0 
0 0 1 1 0 0 
0 1 0 0 1 0 
1 0 0 0 0 1 

Sample Output 4
YES

*/
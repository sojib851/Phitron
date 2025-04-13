#include <stdio.h>

// swaping colums
void swapColums(int n, int m, int matrix[n][m])
{
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][m - 1];
        matrix[i][m - 1] = temp;
    }
}

// swaping rows
void swapRows(int n, int m, int matrix[n][m])
{
    for (int j = 0; j < m; j++)
    {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[n - 1][j];
        matrix[n - 1][j] = temp;
    }
}

// printing matrix
void printMatrix(int n, int m, int matrix[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
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

    swapColums(n, m, matrix);

    swapRows(n, m, matrix);

    printMatrix(n, m, matrix);

    return 0;
}
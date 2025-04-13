#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    a[1][2] = 100;
    a[2][3] = 20;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}

/*
    input
    3 4
    1 3 4 9
    6 4 2 5
    9 2 5 1

    output
    1 3 4 9 
    6 4 100 5 
    9 2 5 20 

*/
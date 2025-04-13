#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
        
    }

    int main_diagonal = 0, sec_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diagonal += m[i][j];
            }
            if (i + j == n - 1)
            {
                sec_diagonal += m[i][j];
            }
            
        }
        
    }
    
    int diff = abs(main_diagonal - sec_diagonal);

    printf("%d", diff);

    return 0;
}

/*
    1. primary diagonal er sumation ber korte hobe then
    2. secondary diagonal er sumation ber korte hobe then
    3. abs(primary diagonal - secondary diagonal) er differance ber korte hobe;

    for example

    input
    3
    1 2 3
    1 2 3
    4 2 3

    output
    3
*/
#include <stdio.h>

int main(){

    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    

    return 0;
}

/*
    input
    3 5

    output
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5

*/